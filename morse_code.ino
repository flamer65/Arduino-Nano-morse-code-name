int occurence = 800;
int time3 = 500;


void setup() {
  // put your setup code here, to run once:
pinMode (LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 //N
 switchON(occurence*3);
 switchON(occurence*1);
 delay(occurence*2);

 //A
 switchON(occurence*1);
 switchON(occurence*3);
 delay(occurence*2);

 //M
 switchON(occurence*3);
 switchON(occurence*3);
 delay(occurence*2);

 //A
 switchON(occurence*1);
 switchON(occurence*3);
 delay(occurence*2);

 //N
 switchON(occurence*3);
 switchON(occurence*1);
 delay(occurence*2);
 
 
 
}
void switchON(int time)
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN,LOW);
  delay(time3);
  
}
