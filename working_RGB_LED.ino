int redPin = 13; // set red LED pin to 11
int greenPin = 12; // set greed LED pin to 10
int bluePin = 11; // set blue LED pin to 6

int r2_r = 10;
int r2_g = 9;
int r2_b = 8;

int r3_r = 7;
int r3_g = 6;
int r3_b = 5;

int r4_r = 4;
int r4_g = 3;
int r4_b = 2;

int brightness = 155; // set brightness variable to 75

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Turn on Serial Port
  pinMode(redPin, OUTPUT); // set redPin as an output
  pinMode(greenPin, OUTPUT); // set greenPin as an output
  pinMode(bluePin, OUTPUT); // set bluePin as an output

  pinMode(r2_r, OUTPUT); // set redPin as an output
  pinMode(r2_g, OUTPUT); // set greenPin as an output
  pinMode(r2_b, OUTPUT); // set bluePin as an output

  pinMode(r3_r, OUTPUT); // set redPin as an output
  pinMode(r3_g, OUTPUT); // set greenPin as an output
  pinMode(r3_b, OUTPUT); 

  pinMode(r4_r, OUTPUT); // set redPin as an output
  pinMode(r4_g, OUTPUT); // set greenPin as an output
  pinMode(r4_b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, 0); // turn off red pin
  analogWrite(greenPin, 100); // turn off green pin
  analogWrite(bluePin, 0); // used the 'brightnes' as value to the turned on light.

  analogWrite(r2_r, 100); // turn off red pin
  analogWrite(r2_g, 20); // turn off green pin
  analogWrite(r2_b, 0);

  analogWrite(r3_r, 0); // turn off red pin
  analogWrite(r3_g, 0); // turn off green pin
  analogWrite(r3_b, 100);

  analogWrite(r4_r, 255); // turn off red pin
  analogWrite(r4_g, 0); // turn off green pin
  analogWrite(r4_b, 6);
}
