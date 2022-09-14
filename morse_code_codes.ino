int occurence = 800;
int time3 = 500;
String name = "Naman";

void setup() {
  // put your setup code here, to run once:
pinMode (LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < name.length(); i++)
  {
    character(name[i]);
  }
}
void dot()
{
  switchON(occurence*1);
}
void dash()
{
  switchON(occurence*3);
}

void character( char A)
{
  if( A == 'A' || A == 'a')
  {
     dot();
     dash();
     delay(occurence*2);

  }
  if(A == 'B' || A == 'b')
  {
    dash();
    dot();
    dot();
    dot();
    delay(occurence*2);
  }
  if (A == 'C' || A == 'c')
  {
    dash();
    dot();
    dash();
    delay(occurence*2);  
  }
  if(A == 'D' || A =='d')
  {
    dash();
    dot();
    dot();
    delay(occurence*2);  
  }
  if(A =='E' || A == 'e')
  {
     dot();
    delay(occurence*2);  
    
  }
  if(A == 'F' || A == 'f' )
  {
    dot();
    dot();
    dash();
    dot();
    delay(occurence*2);  
  }
  if(A == 'G' || A == 'g')
  {
     dash();
     dash();
     dot();
     delay(occurence*2);   
  }
  if(A == 'H' || A == 'h' )
  {
    dot();
    dot();
    dot();
    dot();
    delay(occurence*2);
  }
  if(A =='I' || A =='i')
  {
    dot();
    dot();
    delay(occurence*2);
  }
  if(A == 'J' || A == 'j')
  {
     dot();
     dash();
     dash();
     dash();
    delay(occurence*2);
  }
  if(A == 'K' || A == 'k' )
  {
    dash();
    dot();
    dash();
    delay(occurence*2);   
  }
  if(A == 'L' || A =='l')
  {
    dot();
    dash();
    dot();
    dot();
    delay(occurence*2);  
  }
  if(A == 'M' || A == 'm' )
  {
     dash();
     dash();
     delay(occurence*2);
  }
  if(A == 'N' || A == 'n')
  {
     dash();
     dot();
     delay(occurence*2);
  }
  if(A == 'O'|| A =='o')
  {
    dash();
    dash();
    dash();
    delay(occurence*2);   
  }
  if(A == 'P' || A =='p')
  {
    switchON(occurence*1);
    dash();
    dash();
    dot();
    delay(occurence*2);    
  }
  if(A =='Q' || A =='q')
  {
     dash();
     dash();
     dot();
     dash();
     delay(occurence*2); 
  }
  if(A == 'R' || A == 'r')
  {
    dot();
    dash();
    dot();
    delay(occurence*2);   
  }
  if(A =='S'|| A == 's')
  {
    dot();
    dot();
    dot();
    delay(occurence*2);  
  }
  if(A =='T' || A =='t')
  {
    dash();
    delay(occurence*2);
  }
  if(A =='U' || A == 'u')
  {
    dot();
    dot();
    dash();
    delay(occurence*2);   
  }
  if(A == 'V' || A == 'v' )
  {
    dot();
    dot();
    dot();
    dash();
    delay(occurence*2);
  }
  if(A == 'W' || A == 'w')
  {
    dot();
    dash();
    dash();
    delay(occurence*2);  
  }
  if(A == 'X' || A == 'x')
  {
    dash();
    dot();
    dot();
    dash();
    delay(occurence*2);
  }
  if(A == 'Y' || A =='y')
  {
    dash();
    dot();
    dash();
    dash();
    delay(occurence*2);
  }
  if(A == 'Z' || A == 'z')
  {
    dash();
    dash();
    dot();
    dot();
    delay(occurence*2);
  }
 }
void switchON(int time)
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN,LOW);
  delay(time3);
  
}
