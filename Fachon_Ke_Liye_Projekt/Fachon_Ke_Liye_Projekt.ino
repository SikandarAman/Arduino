// MEMORY GAME
// on-off-reset pin = 2
// led pins = 3,4,5,6,7
// led buttons = 8,9,10,11,12
// win_light = 13

void setup()
{
    Serial.begin(115200);

    // win_light
    pinMode(13, OUTPUT);

    // led pins
    for (int i = 3; i <= 7; i++)
    {
        pinMode(i, OUTPUT);
    }

    // led buttons
    for (int i = 8; i <= 12; i++)
    {
        pinMode(i, INPUT);
        digitalWrite(i, HIGH); // Enable pull-up resistors
    }

    // start button
    pinMode(2, INPUT);
    digitalWrite(2, HIGH);
}

void loop()
{
    int led[] = {3, 4, 5, 6, 7};
    int button[] = {8, 9, 10, 11, 12};

    // Start button check
    if (digitalRead(2) == LOW)
    {
        while (digitalRead(2) == LOW)
            ; // Debounce start button
        Serial.println("Start");

        int level = 0;
        while (level == 0)
        {
            // Select level by pressing a button
            for (int i = 0; i < 5; i++)
            {
                if (digitalRead(button[i]) == LOW)
                {
                    while (digitalRead(button[i]) == LOW)
                        ; // Debounce level button
                    level = i + 1;
                    Serial.println("Level: " + String(level));
                    break;
                }
            }
        }

        // Indicate selected level with LEDs
        for (int i = 0; i < level; i++)
        {
            digitalWrite(led[i], HIGH);
        }
        delay(1000);
        for (int i = 0; i < level; i++)
        {
            digitalWrite(led[i], LOW);
        }

        // Start memory game
        int seq_length = 4 + level;
        int seq[seq_length];
        for (int i = 0; i < seq_length; i++)
        {
            seq[i] = random(0, 5);
        }

        int win = 1;
        for (int i = 1; i <= seq_length; i++)
        {
            delay(500);

            // Display sequence
            for (int j = 0; j < i; j++)
            {
                digitalWrite(led[seq[j]], HIGH);
                delay(600 - (level * 100)); // Use the selected level as the delay factor
                digitalWrite(led[seq[j]], LOW);
                delay(600 - (level * 100));
            }

            // Wait for player to repeat the sequence
            for (int j = 0; j < i; j++)
            {
                int correct_button_pressed = 0;

                // Continuously check all buttons until the correct one is pressed
                while (!correct_button_pressed)
                {
                    for (int k = 0; k < 5; k++)
                    {
                        if (digitalRead(button[k]) == LOW)
                        {
                            while (digitalRead(button[k]) == LOW)
                                ; // Debounce button -- taaki jab tak press krke rakha pause ho jaye vhin pe

                            if (k == seq[j])
                            {
                                correct_button_pressed = 1;
                                delay(20); // Short delay to prevent button overlap
                            }
                            else
                            {
                                win = 0;
                                correct_button_pressed = 1; // Mark as lose
                                break;
                            }
                        }
                    }
                }

                if (!win)
                    break;
            }

            if (!win)
                break;
        }

        // Win or lose indication
        if (win)
        {
            Serial.println("You Win!");
            for (int i = 0; i < level * 2; i++)
            {
                digitalWrite(13, HIGH);
                delay(250 / level);
                digitalWrite(13, LOW);
                delay(250 / level);
            }
        }
        else
        {
            Serial.println("You Lose!");
            for (int i = 0; i < 5; i++)
            {
                digitalWrite(led[i], HIGH);
            }
            delay(1000);
            for (int i = 0; i < 5; i++)
            {
                digitalWrite(led[i], LOW);
            }
        }
    }
}
