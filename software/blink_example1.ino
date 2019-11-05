
#include <Keypad.h>


const byte numROWS = 4;
const byte numCOLS = 3;

char keys[numROWS][numCOLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte rowPins[numROWS] = {A5,A0,A1,A3};//{7, 2, 3, 5};  
byte colPins[numCOLS] = {A4,A6,A2};//{6, 8, 4}; 

Keypad myKeypad = Keypad( makeKeymap(keys), rowPins, colPins, numROWS, numCOLS );

void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("Press 4 to demo correct input");
};



void loop() {

  char key = myKeypad.getKey();
  
  if (key != NO_KEY){
    Serial.print("Key Pressed: ");
    Serial.println(key);
    

  } 

}
