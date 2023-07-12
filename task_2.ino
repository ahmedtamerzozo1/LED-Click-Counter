// C++ code
//
int red=13,blue=12,white=11,button=10;
int i=0,counter=0;
void setup()
{
  pinMode(i,OUTPUT);
  pinMode(button,INPUT);
}

void loop()
{
  i=digitalRead(button);
  if(i==HIGH){
    if(counter==0){digitalWrite(red,1);counter=1;delay(250);}
    else if(counter==1){digitalWrite(blue,1);counter=2;delay(250);}
    else if(counter==2){digitalWrite(white,1);counter=3;delay(250);}
    else if(counter==3){digitalWrite(red,0);
                        digitalWrite(blue,0);
                        digitalWrite(white,0);}
  }
  
  
}