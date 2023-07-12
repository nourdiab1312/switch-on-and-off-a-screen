int pushButton=0;
int counter=0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7,INPUT);
}

void loop()
{
  pushButton=digitalRead(7);
  if(pushButton==HIGH)
  {counter++;
  if (counter==1)
  {digitalWrite(13, HIGH);
  }
    else{
  digitalWrite(13, LOW);
   counter=0; }
  delay(250); 
}
}
