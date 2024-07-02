// C++ code
//
int led1=2;
int led2=3;
int led3=4;
int led4=5;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
 
}

void loop()
{

  digitalWrite(led1, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
  digitalWrite(led4, HIGH);
  delay(5000);
  digitalWrite(led4, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(3000);
  digitalWrite(led3, LOW);
}

               
 
