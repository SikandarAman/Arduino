int i=0;
int LED=6;
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(9, INPUT);
}

void loop()

{  
 if(digitalRead(9)==1)
  { if(i==0){ digitalWrite(LED, HIGH);
             i+=1;}
   else if(i==1){ digitalWrite(LED, LOW);
                 i-=1;}
  }while(digitalRead(9)==1){}
}