int startValue = 5;

int ledPin = 13;


void flashLED(int times){
while(times>0){

  digitalWrite(ledPin,HIGH);
  delay(200);
  digitalWrite(ledPin,LOW);
  delay(200);

times--;
  }
}


void setup() {
  Serial.begin(9600);
pinMode(ledPin, OUTPUT);
Serial.println("===Smart Countdown Starting===");

while(startValue >= 1){
   Serial.print("Counter : ");
  Serial.println(startValue);

flashLED(startValue);
delay(1000);
startValue--;
}

Serial.println("====Countdown Complete ====");

}

void loop() {
}