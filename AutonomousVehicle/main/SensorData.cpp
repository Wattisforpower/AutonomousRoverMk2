#include "Arduino.h"

class SenseSetup{
  public:
  int LMotor;
  int RMotor;
  void Right(){
    digitalWrite(LMotor, HIGH);
    digitalWrite(RMotor, LOW);
  }
  void Left(){
    digitalWrite(LMotor, LOW);
    digitalWrite(RMotor, HIGH);
  }
  void Forwards(){
    digitalWrite(LMotor, HIGH);
    digitalWrite(RMotor, HIGH);
  }
  void Stop(){
    digitalWrite(LMotor, LOW);
    digitalWrite(RMotor, LOW);
  }
};

class Ultrasonic{
  private:
  long duration;
  int echoPin;
  int trigPin;
  public:
  int distance;
  void initialize(int echoPin,int trigPin){
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.println("Ultrasonic Device Initiated");
  }
  int Sense(){
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    return distance;
  }
};

class LineFollowing{
  public:
  int sensorPin;
  int Sense(){
    return analogRead(sensorPin);
  }
};

class Avoidance{
  private:
  int avoidance = HIGH;
  public:
  int avoidancePin;
  int Sense(){
    avoidance = digitalRead(avoidancePin);
    if (avoidance == LOW)
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
};
