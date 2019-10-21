void setup() 
{
  
// put your setup code here, to run once:


pinMode(13,OUTPUT);


Serial.begin(9600);



}



void loop() 

{

  // put your main code here, to run repeatedly:

  
   int d=analogRead(A0);


     Serial.println(d);


     delay(1000);    


     if(d>600)
{
  

       digitalWrite(13,HIGH);
  

       delay(100);
  

       digitalWrite(13,LOW);
  

       delay(100);

     }


     else 
{
  

           digitalWrite(13,LOW);


          }

}