int redPin = 11; // set red LED pin to 11
int greenPin = 10; // set greed LED pin to 10
int bluePin = 6; // set blue LED pin to 6

int brightness = 155; // set brightness variable to 75

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Turn on Serial Port
  pinMode(redPin, OUTPUT); // set redPin as an output
  pinMode(greenPin, OUTPUT); // set greenPin as an output
  pinMode(bluePin, OUTPUT); // set bluePin as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, 0); // turn off red pin
  analogWrite(greenPin, 100); // turn off green pin
  analogWrite(bluePin, 0); // used the 'brightnes' as value to the turned on light.
}
