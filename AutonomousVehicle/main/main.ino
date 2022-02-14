#include "SensorData.cpp"

Ultrasonic Left;
Ultrasonic Centre;
Ultrasonic Right;
LineFollowing LFR;
LineFollowing LFL;
Avoidance A;

SenseSetup Rover;

void setup() {
  // put your setup code here, to run once:
  Left.initialize(2, 3);
  Centre.initialize(4,5);
  Right.initialize(6,7);

  Rover.LMotor = 11;
  Rover.RMotor = 12;

  A.avoidancePin = 13;

  Serial.begin(9600);
  
}

void loop() {
  if((A.Sense()) || (Centre.Sense() < 20)){
    if (Right.Sense() > Left.Sense()){
      Rover.Right();
      Serial.println("R");
    }
    else if (Left.Sense() > Right.Sense()){
      Rover.Left();
      Serial.println("L");
    }
    else{
      Rover.Stop();
      Serial.println("S");
    }
  }
  else{
    Rover.Forwards();
    Serial.println("F");
  }

}
