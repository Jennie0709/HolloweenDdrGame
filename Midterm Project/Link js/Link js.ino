//#include <string>
#include <CapacitiveSensor.h> // Declare sensor.

String myString;

CapacitiveSensor cs_3_2 = CapacitiveSensor(3, 2);
CapacitiveSensor cs_7_6 = CapacitiveSensor(7, 6);
CapacitiveSensor cs_11_10 = CapacitiveSensor(11, 10);
CapacitiveSensor cs_15_14 = CapacitiveSensor(15, 14); 

#define C 262 //도-> Pumpkin
#define D 294 //미 > Guy
#define E 330 //솔 > Ghost
#define F 349 //도# > Cat

int sensor_1on = 0;
int sensor_2on = 0;
int sensor_3on = 0;
int sensor_4on = 0;

int lastState1 = 0;
int lastState2 = 0;
int lastState3 = 0;
int lastState4 = 0;

int sensor1, sensor2, sensor3, sensor4;

void setup() {
  pinMode(13, OUTPUT); 
  analogRead(A0); 
  analogRead(A1); 
  Serial.begin(9600);
}

void loop() {
  long sensor_1 = cs_3_2.capacitiveSensorRaw(30);
  long sensor_2 = cs_7_6.capacitiveSensorRaw(30);
  long sensor_3 = cs_11_10.capacitiveSensorRaw(30);
  long sensor_4 = cs_15_14.capacitiveSensorRaw(30); 

  if (sensor_1 >= 400) {
    tone(13, C, 400);
    sensor_1on = 1;
  } else {
    sensor_1on = 0;
  }
  if (sensor_2 >= 400) {
    tone(13, D, 400);
    sensor_2on = 1;
  } else {
    sensor_2on = 0;
  }
  if (sensor_3 >= 400) {
    tone(13, E, 400);
    sensor_3on = 1;
  } else {
    sensor_3on = 0;
  }
  if (sensor_4 >= 400) {
    tone(13, F, 400);
    sensor_4on = 1;
  } else {
    sensor_4on = 0;
  }

  if (sensor_1on != lastState1){
    if (sensor_1on == 1) {
      sensor1 = 1;
    }
  } else {
    sensor1 = 0;
  }
  lastState1 = sensor_1on;

  if (sensor_2on != lastState2){
    if (sensor_2on == 1) {
      sensor2 = 1;
    }
  } else {
    sensor2 = 0;
  }
  lastState2 = sensor_2on;

  if (sensor_3on != lastState3){
    if (sensor_3on == 1) {
      sensor3 = 1;
    }
  } else {
    sensor3 = 0;
  }
  lastState3 = sensor_3on;

  if (sensor_4on != lastState4){
    if (sensor_4on == 1) {
      sensor4 = 1;
    }
  } else {
    sensor4 = 0;
  }
  lastState4 = sensor_4on;
  

  myString = "";

  myString += String(sensor1);
  myString += ",";  
  myString += String(sensor2);
  myString += ",";
  myString += String(sensor3);
  myString += ",";
  myString += String(sensor4);
  
  Serial.println(myString);  
  
}
