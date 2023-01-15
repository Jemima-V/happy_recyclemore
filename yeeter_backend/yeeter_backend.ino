// C++ code
//
#include <Servo.h>

Servo servoCW;
Servo servoCCW;

// defines pins numbers
const int trigPin = 7;
const int echoPin = 6;
// defines variables
long duration;
int distance;

void setup(){

  //ultrasonic sensor
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication

  //set up servo
  servoCW.attach(9);
  servoCCW.attach(10);
  servoCW.write(90);
  servoCCW.write(90);
  //delay(1000);

  //set up LEDS
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}


void loop(){

  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  //Serial.println("here");
  // Calculating the distance
  distance = duration * 0.034 / 2;
  
  if(distance < 25){
    Serial.println("s");

    char move;

    while (Serial.available() == 0)
    {
      
    }

    move = Serial.read();

    if (move == 'd'){

      digitalWrite(12, HIGH);  // turn the LED on (HIGH is the voltage level) 
      
      servoCW.write(180); 
      servoCCW.write(0);
      delay(3000);
      servoCW.write(90);
      servoCCW.write(90);
      digitalWrite(12, LOW);   // turn the LED off by making the voltage LOW
    }
    else {

      digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)

      servoCW.write(15);                                                                                                                                                                           
      servoCCW.write(165);
      delay(3000);
      servoCW.write(90);
      servoCCW.write(90);
      digitalWrite(13, LOW);
    }
  }  

  

  delay(1000);
  //servoCW.detach();
  //servoCCW.detach();
  
  
}