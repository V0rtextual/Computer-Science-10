//declare global variables
int yellow = 7;
int red = 6;
int green = 5;
int yellowbrightness = 0;
int redbrightness = 0;
int greenbrightness = 0;

void setup() {
  //set pin modes
  pinMode (yellow, OUTPUT);
  pinMode (red, OUTPUT);
  pinMode (green, OUTPUT);
  //start serial communication
  Serial.begin(9600);
} //end of setup

void loop() {
  //updates the brightness of the LED's
  analogWrite(yellow, yellowbrightness);
  analogWrite(red, redbrightness);
  analogWrite(green, greenbrightness);


  //prints the brightness of all the LED's into the serial monitor
  Serial.println("Yellow Brightness:");
  Serial.println (yellowbrightness);
  Serial.println("Red Brightness:");
  Serial.println (redbrightness);
  Serial.println("Green Brightness:");
  Serial.println (greenbrightness);

  //sets yellow's brightness to 255, then back to 0
  if (yellowbrightness == 0) {
    yellowbrightness = 255;
  } else {
    yellowbrightness = 0;
  }

  //increments red's brightness until it reaches 255 then it goes back to 0
  if (redbrightness < 255) {
    redbrightness += 20;
  } else {
    redbrightness = 0;
  }

  //decrement green's brightness until it reaches 0 then it goes back to 255
  if (greenbrightness > 0) {
    greenbrightness -= 20;
  } else {
    greenbrightness = 255;
  }

  //delays loop by 1000ms
  delay(1000);
} //end of loop
