void setup() {
 Serial.begin(9600);
 pinMode(8, INPUT);// set pin as input
 pinMode(7,OUTPUT);                                                                   // This code restored by Ahmet Ediz Harem on August 01 , 2019
                                                                                      // Instagram : 
}

void loop() {
  //Written for Robojax on Dec 28, 2017
  int detect = digitalRead(8);// read obstacle status and store it into "detect"
  if(detect == LOW){
    
   Serial.println("Obastacle on the way"); 
   digitalWrite(7, HIGH);
   delay(100);
   digitalWrite(7,LOW);
   delay(100);
  }else{
    
   Serial.println("All clear");  
   digitalWrite(7,LOW);
  }
  delay(100);
}
