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
void character( char A)
{
  if( A == 'A' || A == 'a')
  {
      switchON(occurence*1);
   switchON(occurence*3);
   delay(occurence*2);

  }
  if(A == 'B' || A == 'b')
  {
    switchON(occurence*3);
    switchON(occurence*1);
    switchON(occurence*1);
    switchON(occurence*1);
    delay(occurence*2);
  }
  if (A == 'C' || A == 'c')
  {
   switchON(occurence*3);
   switchON(occurence*1);
    switchON(occurence*3);
    delay(occurence*2);  
  }
  if(A == 'D' || A =='d')
  {
    switchON(occurence*3);
    switchON(occurence*1);
    switchON(occurence*1);
    delay(occurence*2);  
  }
  if(A =='E' || A == 'e')
  {
     switchON(occurence*1);
    delay(occurence*2);  
    
  }
  if(A == 'F' || A == 'f' )
  {
     switchON(occurence*1);
    switchON(occurence*1);
    switchON(occurence*3);
    switchON(occurence*1);
    delay(occurence*2);  
  }
  if(A == 'G' || A == 'g')
  {
    switchON(occurence*3);
    switchON(occurence*3);
     switchON(occurence*1);
     delay(occurence*2);   
  }
  if(A == 'H' || A == 'h' )
  {
    switchON(occurence*1);
    switchON(occurence*1);
    switchON(occurence*1);
    switchON(occurence*1);
    delay(occurence*2);
  }
  if(A =='I' || A =='i')
  {
     switchON(occurence*1);
    switchON(occurence*1);
    delay(occurence*2);
  }
  if(A == 'J' || A == 'j')
  {
     switchON(occurence*1);
     switchON(occurence*3);
    switchON(occurence*3);
    switchON(occurence*3);
    delay(occurence*2);
  }
  if(A == 'K' || A == 'k' )
  {
    switchON(occurence*3);
    switchON(occurence*1);
    switchON(occurence*3);
    delay(occurence*2);   
  }
  if(A == 'L' || A =='l')
  {
    switchON(occurence*1);
    switchON(occurence*3);
    switchON(occurence*1);
    switchON(occurence*1);
    delay(occurence*2);  
  }
  if(A == 'M' || A == 'm' )
  {
     switchON(occurence*3);
     switchON(occurence*3);
     delay(occurence*2);
  }
  if(A == 'N' || A == 'n')
  {
     switchON(occurence*3);
     switchON(occurence*1);
     delay(occurence*2);
  }
  if(A == 'O'|| A =='o')
  {
    switchON(occurence*3);
    switchON(occurence*3);
    switchON(occurence*3);
    delay(occurence*2);   
  }
  if(A == 'P' || A =='p')
  {
    switchON(occurence*1);
    switchON(occurence*3);
    switchON(occurence*3);
    switchON(occurence*1);
    delay(occurence*2);    
  }
  if(A =='Q' || A =='q')
  {
     switchON(occurence*3);
     switchON(occurence*3);
     switchON(occurence*1);
     switchON(occurence*3);
     delay(occurence*2); 
  }
  if(A == 'R' || A == 'r')
  {
    switchON(occurence*1);
    switchON(occurence*3);
    switchON(occurence*1);
    delay(occurence*2);   
  }
  if(A =='S'|| A == 's')
  {
    switchON(occurence*1);
    switchON(occurence*1);
    switchON(occurence*1);
    delay(occurence*2);  
  }
  if(A =='T' || A =='t')
  {
    switchON(occurence*3);
    delay(occurence*2);
  }
  if(A =='U' || A == 'u')
  {
    switchON(occurence*1);
    switchON(occurence*1);
    switchON(occurence*3);
    delay(occurence*2);   
  }
  if(A == 'V' || A == 'v' )
  {
    switchON(occurence*1);
    switchON(occurence*1);
    switchON(occurence*1);
    switchON(occurence*3);
    delay(occurence*2);
  }
  if(A == 'W' || A == 'w')
  {
    switchON(occurence*1);
    switchON(occurence*3);
    switchON(occurence*3);
    delay(occurence*2);  
  }
  if(A == 'X' || A == 'x')
  {
    switchON(occurence*3);
    switchON(occurence*1);
    switchON(occurence*1);
    switchON(occurence*3);
    delay(occurence*2);
  }
  if(A == 'Y' || A =='y')
  {
    switchON(occurence*3);
    switchON(occurence*1);
    switchON(occurence*3);
    switchON(occurence*3);
    delay(occurence*2);
  }
  if(A == 'Z' || A == 'z')
  {
    switchON(occurence*3);
    switchON(occurence*3);
    switchON(occurence*1);
    switchON(occurence*1);
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
