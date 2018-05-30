/*
 Basic_I2C.ino
 Brian R Taylor
 brian.taylor@bolderflight.com
 Copyright (c) 2017 Bolder Flight Systems
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software
 and associated documentation files (the "Software"), to deal in the Software without restriction,
 including without limitation the rights to use, copy, modify, merge, publish, distribute,
 sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 The above copyright notice and this permission notice shall be included in all copies or
 substantial portions of the Software.
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
 BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

// an MPU9250 object with the MPU-9250 sensor on I2C bus 0 with address 0x68
#include "Club.h"

int status;

//declaration of the Threshold
const int threshold = 2;

// declaration pin of led
const int ledPinX = 8;
const int ledPinY = 10;
const int ledPinZ = 12;

//declaration led state
int ledStateX = LOW;
int ledStateY = LOW;
int ledStateZ = LOW;

Club myClub;

void setup() {
	// serial to display data
	Serial.begin(9600);
	while (!Serial) {
	}
	Serial.println("Club Starting");
	myClub.init();
	delay(100);
	Serial.println("Club initialized");
	// start communication with IMU

	//set digital pin output
	pinMode(ledPinX, OUTPUT);
	pinMode(ledPinY, OUTPUT);
	pinMode(ledPinZ, OUTPUT);
}

// function to check rotation axe X
//void checkAxeX(){
//if(abs(IMU.getGyroX_rads()) >= threshold){
//	ledStateX = HIGH;
//}else {
//	ledStateX = LOW;
//}
//}
//
////function to check rotation axe Y
//void checkAxeY(){
//	if(abs(IMU.getGyroY_rads()) >= threshold){
//		ledStateY = HIGH;
//	}else {
//		ledStateY = LOW;
//	}
//}
//
////function to check rotation axe Z
//void checkAxeZ(){
//	if(abs(IMU.getGyroZ_rads() )>= threshold){
//		ledStateZ = HIGH;
//	}else{
//		ledStateZ = LOW;
//	}
//}

void loop() {
//	Serial.println(myClub.printGyroSensor());
	myClub.readSensor();

	Serial.print(myClub.getGyroX(), 3);
	Serial.print("$");
	Serial.print(myClub.getGyroY(), 3);
	Serial.print("$");
	Serial.print(myClub.getGyroZ(), 3);
	Serial.println();
//	Serial.print(String(abs(myClub.getGyroX())));
	// read the sensor
//	myClub.getMPU()->readSensor();
	// display the data
//  Serial.print(myClub.getMPU()->getAccelX_mss(),3);
//  Serial.print("\t");
//  Serial.print(myClub.getMPU()->getAccelY_mss(),3);
//  Serial.print("\t");
//  char msg[50];
////  sprintf(msg,"%f",(double) myClub.getMPU()->getAccelZ_mss());
//  Serial.print((double)myClub.getMPU()->getAccelZ_mss());
//  Serial.print("\t");
//  Serial.print(printf("%f",myClub.getMPU()->getGyroX_rads()));
//  Serial.print("\t");
//  Serial.print(myClub.getMPU()->getGyroY_rads(),6);
//  Serial.print("\t");
//  Serial.print(myClub.getMPU()->getGyroZ_rads(),6);
//  Serial.print("\t");
//  Serial.print(IMU.getMagX_uT(),6);
//  Serial.print("\t");
//  Serial.print(IMU.getMagY_uT(),6);
//  Serial.print("\t");
//  Serial.print(IMU.getMagZ_uT(),6);
//  Serial.print("\t");
//	Serial.print(IMU.getTemperature_C(), 6);
//	Serial.println();

	// call function
//	checkAxeX();
//	checkAxeY();
//	checkAxeZ();

	digitalWrite(ledPinX, ledStateX);
	digitalWrite(ledPinY, ledStateY);
	digitalWrite(ledPinZ, ledStateZ);
	delay(100);
}
