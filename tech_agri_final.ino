#include <SoftwareSerial.h>


#define stepX         2
#define dirX          5


#define stepY         3
#define dirY          6

#define stepZ        4
#define dirZ          7

#define enable     8



SoftwareSerial mySerial(10, 11); // RX, TX



int a,b,c,i;
int x,y,z;
int value ;
 int s=0,t=0;



void setup() {
  Serial.begin(9600);
  Serial.println("Start");
  delay(2000);
  
 
  pinMode(stepX  , OUTPUT);
  pinMode(dirX    , OUTPUT);
  
  pinMode(stepY  , OUTPUT);
  pinMode(dirY    , OUTPUT);
  
  pinMode(stepZ  , OUTPUT);
  pinMode(dirZ    , OUTPUT);

  pinMode(enable , OUTPUT);

  
   pinMode(A0  , OUTPUT);//Z AXIS MOTOR
  pinMode(A1   , OUTPUT);//Z AXIS MOTOR
  pinMode(A2  , OUTPUT);  //FOR ELECTRO MAGNET
  pinMode(A3   , OUTPUT);
   pinMode(A4  , OUTPUT);// FOR BLOWER
  pinMode(A5   , OUTPUT);//FOR MOTOR

  digitalWrite(A4,LOW);
  digitalWrite(A5,LOW);
  digitalWrite(A3,LOW);
  digitalWrite(A2,LOW);
  
 
  

 
  

 
  

   
   
}

void loop ()  {
  Serial.println("Start lll");

 while (Serial.available() == 0){}
  i = Serial.parseInt();
  if(i>0){
  Serial.print("i=");
  Serial.println(i);
  

 

  delay(2000);
}
  

 
switch (i) {
  
 case 111:
      Serial.println("S1");
      a=0; 
      b=0;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
     calculate();
      
     motionX();
     motionY();
     
     s=0,t=0;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
  
    break;
  case 1:
      Serial.println("S1");
      a=275; 
      b=500;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
     calculate();
      
     motionX();
     motionY();
     motionZ();

     
     
     s=275,t=500;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
  
    break;
    
  case 2:
      Serial.println("S2");
      a=275; 
      b=1100;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX(),motionY();
      motionZ();
     s=275;t=1100;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
    
    break;

    case 3:
      Serial.println("S3");
      a=275; 
      b=1834;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
      motionZ();
     s=275,t=1834;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
    
    break;

    case 4:
      Serial.println("S4");
      a=600;
      b=500;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
      motionZ();
      s=600;t=500;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
    
    break;

    case 5:
      Serial.println("S5");
      a=600;
       b=1100;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
      motionZ();
      s=600;t=1100;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
    break;

    case 6:
      Serial.println("S6");
      a=600;
      b=1834;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
      motionZ();
      s=600;t=1834;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
    
    break;

    case 7:
      Serial.println("S7");
      a=800;
      b=500;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
     motionZ();
      s=800;t=500;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
    
    break;

    case 8:
      Serial.println("S8");
      a=800;
      b=1100;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
     motionZ();
      s=800;t=1100;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
    
    break;

    case 9:
      Serial.println("S9");
      a=800;
      b=1834;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
     motionZ();
      s=800;t=1834;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
    
    break;

    case 10:
      Serial.println("S10");
      a=1080;
      b=500;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
     motionZ();
      s=1080;t=500;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
    
    break;

    case 11:
      Serial.println("S11");
      a=1080;
      b=1100;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
     motionZ();
      s=1080;t=1100;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
    
    break;

    case 12:
      Serial.println("S12");
      a=1080;
      b=1834;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
     motionZ();
      s=1080;t=1834;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
    
    break;
  case 100:
     digitalWrite(A2,HIGH);
      Serial.println("magnet on");
      
      Serial.println("S100");
      Serial.println("positive direction");
      digitalWrite(dirX,LOW);
      digitalWrite(dirY,LOW);
      a=0;
      b=600;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      
      
     motionX();motionY();
     Serial.println("xy motion completed");
     toolmotionZ();
     s=0,t=300;
     a=0;
     b=0;
     calculate();
     motionX();motionY();
     
   
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
      Serial.println("negative direction");
      motionX();
      motionY();
      
     
      
     Serial.println(" end loop values");
      i=0;
     
    
    break;

    case 200:
    digitalWrite(A1,HIGH);
      digitalWrite(A0,LOW);
      Serial.println("S200");
      a=0;
      b=1200;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
      s=0;t=1200;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
     break;

     
     case 300:

     digitalWrite(A0,HIGH);
      digitalWrite(A1,LOW);
      Serial.println("S300");
      a=0;
      b=1800;
      Serial.println("loop values");
      Serial.println(a);
      Serial.println(b);
      calculate();
      
     motionX();motionY();
      s=0;t=1800;
     Serial.println(" end loop values");
      Serial.println(s);
      Serial.println(t);
      i=0;
      value=0;
    
  default:
  a=0;
  b=0;
   value=0;
    break;
}}
  
  
  
   
 void motionX(){
 
  for(int x = 0; x < a; x++) {
    digitalWrite(stepX,HIGH);
    digitalWrite(stepY,HIGH);
    delayMicroseconds(6000);
    digitalWrite(stepX,LOW);
    digitalWrite(stepY,LOW);
    delayMicroseconds(6000);
  }
 
 

    
   
  }
  
  void motionY() { 
 
  for(int x = 0; x < b; x++) {
    digitalWrite(stepZ,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepZ,LOW);
    delayMicroseconds(1000);
  }}
  
  void motionZ(){

    digitalWrite(A0,HIGH);
      digitalWrite(A1,LOW);
      delay(30000);
      digitalWrite(A0,LOW);
      digitalWrite(A1,HIGH);
      delay(30000);
      digitalWrite(A0,LOW);
      digitalWrite(A1,LOW);
      
     
  }
  void toolmotionZ(){
    digitalWrite(A0,HIGH);
      digitalWrite(A1,LOW);
      delay(35000);
      digitalWrite(A0,LOW);
      digitalWrite(A1,HIGH);
      delay(35000);
      digitalWrite(A0,LOW);
      digitalWrite(A1,LOW);
      
   
    
  }

  void calculate(){
   
    a=a-s;
    Serial.println("calculate values");
    Serial.println(a);
    if(a>=0){
      Serial.println("direction not change");
      digitalWrite(dirX,LOW);
      digitalWrite(dirY,LOW);
    }
    else{
      Serial.println("direction change");
      digitalWrite(dirX,HIGH);
      digitalWrite(dirY,HIGH);
      a=-a;
    }
    b=b-t;
    Serial.println("calculate values");
    Serial.println(b);
    if(b>=0){
      Serial.println("direction not change");
      digitalWrite(dirZ,LOW);
    }
    else{
      Serial.println("direction change");
     digitalWrite(dirZ,HIGH);
      
      b=-b; 
    }
    Serial.println("after calculate");
    Serial.println(a);
    Serial.println(b);
  }

  
 
