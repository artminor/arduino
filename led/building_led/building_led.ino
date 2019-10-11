int led = 13; // the pin the LED is connected to
//int button = 5;
//
//int buttonState = 0;

void setup() {
  pinMode(led, OUTPUT); // Declare the LED as an output
//  pinMode(button, INPUT);
  
}

void loop() {
//  buttonState = digitalRead(button);
//  if(buttonState==HIGH){
    digitalWrite(led, HIGH); // Turn the LED on
    delay(500);
//  }else{
    digitalWrite(led, LOW);
    delay(5000);
//  }
}
