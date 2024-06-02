int i = 0;
int j = 0;
int k =0;
int red = 9;
int blue = 10;
int green = 11;
int r = 3;
int b = 5;
int g =6;

void setup()
{
  Serial.begin(9600);
  pinMode(r, INPUT);
  pinMode(b, INPUT);
  pinMode(g, INPUT);
  pinMode (red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode (green, OUTPUT);
}

void loop()
{  if(i==1){Serial.println('r');}
 if(j==1){Serial.println('b');}
 if(k==1){Serial.println('g');}
   
  
   if(digitalRead(r)==1)
  { if(i==0){ digitalWrite(red, HIGH);
             i+=1;}
   else if(i==1){ digitalWrite(red, LOW);
                 i-=1;}
  }while(digitalRead(r)==1){}
  
   if(digitalRead(b)==1)
  { if(j==0){ digitalWrite(blue, HIGH);
             j+=1;}
   else if(j==1){ digitalWrite(blue, LOW);
                 j-=1;}
  }while(digitalRead(b)==1){}
  
   if(digitalRead(g)==1)
  { if(k==0){ digitalWrite(green, HIGH);
             k+=1;}
   else if(k==1){ digitalWrite(green, LOW);
                 k-=1;}
  }while(digitalRead(g)==1){}
}