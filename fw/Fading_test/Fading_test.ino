/*
 Fading
 
 This example shows how to fade an LED using the analogWrite() function.
 
 The circuit:
 * LED attached from digital pin 9 to ground.
 
 Created 1 Nov 2008
 By David A. Mellis
 modified 30 Aug 2011
 By Tom Igoe
 
 http://arduino.cc/en/Tutorial/Fading
 
 This example code is in the public domain.
 
 */

const int buttonPin = 3;

int wait_idx = 0;
int waits[] = {50, 30, 10};
int buttonState;             // the current reading from the input pin
int lastButtonState = LOW;   // the previous reading from the input pin


// the following variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long lastDebounceTime = 0;  // the last time the output pin was toggled
long debounceDelay = 50;    // the debounce time; increase if the output flickers



int ledPin = 9;    // LED connected to digital pin 9

int pins[] = {5,6,9,10};

void setup()  { 
  pinMode(buttonPin, INPUT_PULLUP);

} 

int current_wait = waits[wait_idx];

void loop()  { 
  
  
  if (digitalRead(buttonPin) == LOW) {
    wait_idx = (wait_idx + 1) % (sizeof(waits)/sizeof(int));
    current_wait = waits[wait_idx];
  }
  
  
  for (int idx = 0; idx < (sizeof(pins)/sizeof(int)); idx++) {
    ledPin = pins[idx];
    
    
    
//    //----  
//      // read the state of the switch into a local variable:
//      int reading = digitalRead(buttonPin);
//    
//      // check to see if you just pressed the button 
//      // (i.e. the input went from LOW to HIGH),  and you've waited 
//      // long enough since the last press to ignore any noise:  
//    
//      // If the switch changed, due to noise or pressing:
//      if (reading != lastButtonState) {
//        // reset the debouncing timer
//        lastDebounceTime = millis();
//      } 
//      
//      if ((millis() - lastDebounceTime) > debounceDelay) {
//        // whatever the reading is at, it's been there for longer
//        // than the debounce delay, so take it as the actual current state:
//    
//        // if the button state has changed:
//        if (reading != buttonState) {
//          buttonState = reading;
//    
//          // button has been debounced
//          if (buttonState == LOW) {
//            wait_idx = (wait_idx + 1) % (sizeof(waits)/sizeof(int));
//            current_wait = waits[wait_idx];
//          }
//        }
//      }
//      
//    //  // set the LED:
//    //  digitalWrite(ledPin, ledState);
//    
//      // save the reading.  Next time through the loop,
//      // it'll be the lastButtonState:
//      lastButtonState = reading;
//    //----  
//    
    
    
    
    // fade in from min to max in increments of 5 points:
    for(int fadeValue = 0 ; fadeValue <= 128; fadeValue +=5) { 
      // sets the value (range from 0 to 255):
      analogWrite(ledPin, fadeValue);         
      // wait for 30 milliseconds to see the dimming effect    
      delay(current_wait);                            
    } 
  
    // fade out from max to min in increments of 5 points:
    for(int fadeValue = 128 ; fadeValue >= 0; fadeValue -=5) { 
      // sets the value (range from 0 to 255):
      analogWrite(ledPin, fadeValue);         
      // wait for 30 milliseconds to see the dimming effect    
      delay(current_wait);                            
    } 
  }
}


