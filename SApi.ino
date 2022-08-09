
void setup()    
{    
  Serial.begin(9600);    
  pinMode(13, OUTPUT); 

  
}    
    
void loop()    
{
  /*
   while(Serial.available()){

   Serial.println("loop");
   }
   */
 
 
    String  data=Serial.readString();   
    if (data.indexOf("right") > -1)
    {
       digitalWrite(13, HIGH);
       delay(1000);
      digitalWrite(13, LOW);
       delay(1000);
      Serial.println(2);
    }else if(data.indexOf("lift") > -1){
      digitalWrite(13, HIGH);
      Serial.println(1);
    }else{
      digitalWrite(13, LOW);
       Serial.write("0");
    }
    
  
 
  //delay(1000);   
}   
