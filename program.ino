char val;
void setup() {
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 digitalWrite(13,LOW);
}
void loop() {
  if(Serial.available()){
 val = Serial.read();
 Serial.println(val);
}
if(val=='A'){
  digitalWrite(11,HIGH);}
else if(val=='B'){
  digitalWrite(11,LOW);}
else if(val=='C'){
  digitalWrite(12,HIGH);}
else if(val=='D'){
  digitalWrite(12,LOW);}
else if(val=='E'){
  digitalWrite(13,HIGH);}
else if(val=='F'){
  digitalWrite(13,LOW);}
delay(100);
}


