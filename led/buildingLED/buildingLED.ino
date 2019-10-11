//Jun Chen
//led switch

int led = 13; // the pin the LED is connected to
int button = 5;

int buttonState = HIGH;
int inputReading;

void setup() {
  pinMode(led, OUTPUT); // Declare the LED as an output
  pinMode(button, INPUT);
}

void loop() {
  inputReading = digitalRead(button);
  if(inputReading==HIGH){
    if(buttonState==HIGH){
      buttonState=LOW; // Turn the LED off
    }else{
      buttonState=HIGH; // Turn the LED on
    }
    digitalWrite(led, buttonState);
  }
}
