int led=4;
int ldrpin=A0;
int deger=0;
void setup() {
 pinMode(led,OUTPUT);
}
void loop() {
 deger=analogRead(ldrpin);
if(deger>=0&&deger<=500)
{
 digitalWrite(led,HIGH);
}
else if(deger>=501&&deger<=1023)
{
 digitalWrite(led,LOW);
}
delay(200);
}