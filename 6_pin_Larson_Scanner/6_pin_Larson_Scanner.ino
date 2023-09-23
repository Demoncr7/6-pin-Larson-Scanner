int pinArray[] = {2, 3, 4, 5, 6, 7};
int count = 0;
int timer = 75;// Changes the speed of the lights.

void setup(){
  
  for (count=0;count<6;count++){ // < 6 want it to go less than 6.
    pinMode(pinArray[count], OUTPUT);// calling the pinMode of arrays
  }
}

void loop() {
  for (count=5;count>0;count--) {
    digitalWrite(pinArray[count], HIGH);// using the void setup pinmode
    delay(timer);// using the TIMER from the library avove.
    digitalWrite(pinArray[count], LOW);
    delay(timer);
  }
  for (count=5;count>0;count--) {
    digitalWrite(pinArray[count], HIGH);
    delay(timer);
    digitalWrite(pinArray[count], LOW);
    delay(timer);
  }
}
