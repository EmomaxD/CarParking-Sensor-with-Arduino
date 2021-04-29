#define trigPin 3
#define echoPin 2
#define buzzerPin 4
#define led 5





void setup() {
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);
pinMode(buzzerPin,OUTPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
 
}


void loop(){
 mesafe();
 
 delay(100);
 ses(mesafe());
    
  
}
float mesafe(){
  long duration,distance;

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPin,LOW);

  duration=pulseIn(echoPin,HIGH);
  distance=duration/58.2;
  Serial.println(distance);
  return distance;
  
  
  
  
}
void ses(float distance){
if(distance<=30 && distance>12){
    digitalWrite(buzzerPin,HIGH);
    digitalWrite(led,HIGH);
    delay(240);
    digitalWrite(buzzerPin,LOW);
    digitalWrite(led,LOW);
    delay(240);
  }
  else if(distance<=12 && distance>9){

    digitalWrite(buzzerPin,HIGH);
    digitalWrite(led,HIGH);
    delay(110);
    digitalWrite(buzzerPin,LOW);
    digitalWrite(led,LOW);
    delay(110);
  }
  else if(distance<=9 && distance >6){
    digitalWrite(buzzerPin,HIGH);
    digitalWrite(led,HIGH);
    delay(75);
    digitalWrite(buzzerPin,LOW);
    digitalWrite(led,LOW);
    delay(75);
  }
  else if(distance<=6 && distance>4){
    digitalWrite(buzzerPin,HIGH);
    digitalWrite(led,HIGH);
    delay(35);
    digitalWrite(buzzerPin,LOW);
    digitalWrite(led,LOW);
    delay(35);
  }
  else if(distance<=4 && distance>=0){
    digitalWrite(buzzerPin,HIGH);
    digitalWrite(led,HIGH);

  }
  else{
      digitalWrite(led,LOW);    
      digitalWrite(buzzerPin,LOW);
      
  }

  
}
