void on_all()
{
  for(int i=0;i<8;i++)
  {
    digitalWrite(i,HIGH);
  }
}

void one_by_one()
{
  for(int i=0;i<8;i++)
  {
    digitalWrite(i,HIGH);
    delay(2000);
    digitalWrite(i,LOW);
  }
}

void two()
{
  for(int i=0;i<8;i=i+2)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    delay(2000);
    digitalWrite(i,LOW);
    digitalWrite(i+1,LOW);
  }
}


void three()
{
   for(int i=0;i<8;i=i+3)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    digitalWrite(i+2,HIGH);
    delay(2000);
    digitalWrite(i,LOW);
    digitalWrite(i+1,LOW);
    digitalWrite(i+2,LOW);
  }
}

void from_end()
{
  for(int i=0,j=7;i<4;i++)
  {
      digitalWrite(i,HIGH);
      digitalWrite(j,HIGH);
      delay(2000);
      digitalWrite(i,LOW);
      digitalWrite(j,LOW);
      j--;
  }  
}



void from_middle()
{
  for(int i=3,j=4;i>=0;i--)
  {
      digitalWrite(i,HIGH);
      digitalWrite(j,HIGH);
      delay(2000);
      j++;
  }  
}

void off_all()
{
  for(int i=0;i<8;i++)
  {
    digitalWrite(i,LOW);
  }
}


void odd_on()
{
  for(int i=0;i<8;i++)
  {
    if(i%2==1)
    {
      digitalWrite(i,HIGH);
    }
    else
    {
      digitalWrite(i,LOW);
    }
  }
}



void even_on()
{
  for(int i=0;i<8;i++)
  {
    if(i%2==1)
    {
      digitalWrite(i,LOW);
    }
    else
    {
      digitalWrite(i,HIGH);
    }
  }
}



void setup() {
  for(int i=0;i<8;i++)
  {
    pinMode(i,OUTPUT);
  }
}


void loop() {
  on_all();
  delay(2000);
  off_all();
  delay(2000);
  odd_on();
  delay(2000);
  even_on();
  delay(2000);
  off_all();
  one_by_one();
  delay(2000);
  two();
  delay(2000);
  three();
  delay(2000);
  from_end();
  delay(2000);
  off_all();
  delay(2000);
  from_middle();
  delay(2000);
  off_all();
}
