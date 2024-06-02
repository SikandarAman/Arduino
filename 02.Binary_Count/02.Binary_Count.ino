int Led[] = {5, 6, 9, 10, 11};
int Led_in = 3;
int count = 0;

void setup(){
    Serial.begin(9600);
    for (int i = 0; i < 5; i++) {
        pinMode(Led[i], OUTPUT);
    }
    pinMode(Led_in, INPUT);
}

void loop(){
    if(digitalRead(Led_in)==HIGH){
        while(digitalRead(Led_in)==HIGH);
        count+=1;
        if(count==32){
            count-=32;
        }
    }

    Serial.print("Number is : ");
    Serial.println(count);

    String str = "";
    int count_temp = count;
    while(count_temp!=0){
        if(count_temp%2==0){
            str='0'+str;
        }
        else{
            str='1'+str;
        }
        count_temp=(count_temp/2) ;
    }
    for(int i=0; i<(5-str.length()); i++){
        str= '0' +str;
    }
    for(int i=0; i<5 ; i++){
        if(str[i]=='1'){
            digitalWrite(Led[i], HIGH);
        }
        else{
            digitalWrite(Led[i], LOW);
        }
    }
}