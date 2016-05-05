
int switchState = 0;
int initLoop = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
 
}

void loop() {

  if(initLoop == 0 )
  {
    
    int i=0; 
    for( i =0; i<10 ;i++)
    {
      digitalWrite(4,HIGH);
      delay(250);
      digitalWrite(4,LOW);
      delay(250);
    }
    initLoop = 1;  
  }
  else
  {
    switchState = digitalRead(2);
  
    if(switchState == LOW)
    {
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
    }
    else
    {
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
  
      delay(250);
  
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      delay(250);
    }
  }
  
  
}
