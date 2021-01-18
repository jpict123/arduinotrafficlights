#include <ezButton.h>

ezButton button1(3);  // create ezButton object that attach to pin 11;
ezButton button2(5);  // create ezButton object that attach to pin 12;
ezButton button3(6);  // create ezButton object that attach to pin 13;

//int lastState = LOW;
//int currentState;

int red = 8;
int yellow = 9;
int green = 10;



void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  Serial.begin(9600);
  button1.setDebounceTime(50); // set debounce time to 50 milliseconds
  button2.setDebounceTime(50); // set debounce time to 50 milliseconds
  button3.setDebounceTime(50); // set debounce time to 50 milliseconds

  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);

}


  
void loop() {
  button1.loop(); // MUST call the loop() function first
  button2.loop(); // MUST call the loop() function first
  button3.loop(); // MUST call the loop() function first


  

  if(button1.isPressed()){
    Serial.println("The button 1 is pressed");
    if (button1.getCount() % 2 == 1){
      digitalWrite(red, HIGH);
    }
    else{
      digitalWrite(red, LOW);
    }
  }      





    
  if(button2.isPressed()){
    Serial.println("The button 2 is pressed");
    if (button2.getCount() % 2 == 1){
      digitalWrite(yellow, HIGH);
    }
    else{
      digitalWrite(yellow, LOW);
    }    
  }




  

  if(button3.isPressed()){
    Serial.println("The button 3 is pressed");
    if (button3.getCount() % 2 == 1){
      digitalWrite(green, HIGH);
    }
    else{
      digitalWrite(green, LOW);   
    } 
  }
}
