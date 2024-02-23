// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  int isik = analogRead(A0);;  
  Serial.println(isik);
  if(isik < 100)
 {
   digitalWrite(2,1);
    digitalWrite(3,1);
 }
  else if (isik > 100 & isik <500)
  {
    digitalWrite(2,1);
    digitalWrite(3,0);
    
  }
  else {
    digitalWrite(2,0);
    
  }
  
  delay(10);
}