int temp1,temp2;
#define  PIN1 2
#define  PIN2 3
#define  PIN3 10 
#define  PIN4 11
#define  PIN5 12 
#define  PIN5 13
void setup() {
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
 temp1=digitalRead(PIN1);
 temp2=digitalRead(PIN2);

if((temp1==0&&temp2==0)||(temp1==1&&temp2==1))
{
  digitalWrite(PIN3,1);
  digitalWrite(PIN4,0);
  digitalWrite(PIN5,1);
  digitalWrite(PIN6,0);    
}
else if(temp1==1&&temp2==0)
{
  digitalWrite(PIN3,0);
  digitalWrite(PIN4,0);
  digitalWrite(PIN5,1);
  digitalWrite(PIN6,0);
}
else if(temp1==0&&temp2==1)
{
  digitalWrite(PIN3,1);
  digitalWrite(PIN4,0);
  digitalWrite(PIN5,0);
  digitalWrite(PIN6,0);
}
}
