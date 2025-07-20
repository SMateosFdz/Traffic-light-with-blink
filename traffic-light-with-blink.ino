// Constants with pin number value for the leds
const int red = 13;
const int yellow = 12;
const int green = 11;

// Establish the pins with output
void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

// Loop function with traffic lights logic
void loop() {
  stayLow(red);
  stayHigh(green, 3000);
  blink(green, 500);

  stayLow(green);
  stayHigh(yellow, 2000);
  stayLow(yellow);

  stayHigh(red, 3000);
  blink(red, 500);
}

/*
  Function to blink leds
  Input: pin number and delay in miliseconds
*/
void blink(int led, int delayS) {
  digitalWrite(led, HIGH);
  delay(delayS);
  digitalWrite(led, LOW);
  delay(delayS);
  digitalWrite(led, HIGH);
  delay(delayS);
  digitalWrite(led, LOW);
  delay(delayS);
  digitalWrite(led, HIGH);
  delay(delayS);
}

/*
  Function to turn on a led during a period of time
  Input: pin number and delay in miliseconds
*/
void stayHigh(int led, int stay) {
  digitalWrite(led, HIGH);
  delay(stay);
}

/*
  Function to switch off a led
  Input: pin number
*/
void stayLow(int led) {
  digitalWrite(led, LOW);
}
