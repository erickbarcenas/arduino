#define boton 3
#define foco  8
boolean encendido=0;

void setup() {
pinMode(boton, INPUT);
pinMode(foco,OUTPUT);
digitalWrite(foco,HIGH);
Serial.begin(9600);
}

void loop() {
if(digitalRead(boton) == 1){
      encendido= !encendido;}
      if(encendido==1){
       digitalWrite(foco,LOW);         
      }
      else{
       digitalWrite(foco,HIGH); 
      }
 delay(800);     
}
# https://youtu.be/jgOCISq-9tw
