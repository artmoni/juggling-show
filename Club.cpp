/*
 * Club.cpp
 *
 *  Created on: 30 mai 2018
 *      Author: sfleury
 */

#include "Club.h"
#include "MPU9250.h"

Club::Club() {
	IMU = new MPU9250(Wire, 0x68);
}

Club::~Club() {
	// TODO Auto-generated destructor stub
}

void Club::init() {
	int status = IMU->begin();

	if (status < 0) {
//		Serial.println("IMU initialization unsuccessful");
//		Serial.println("Check IMU wiring or try cycling power");
//		Serial.print("Status: ");
//		Serial.println(status);
		while (1) {
		}
	}
//	IMU->setGyroBiasX_rads(0);
//	IMU->setGyroBiasY_rads(0);
//	IMU->setGyroBiasZ_rads(0);
//	IMU->calibrateAccel();
//	IMU->calibrateGyro();
//	IMU->calibrateMag();

}

int Club::readSensor() {

	return IMU->readSensor();
}

float Club::getGyroX() {
	return IMU->getGyroX_rads();
}
float Club::getGyroY() {
	return IMU->getGyroY_rads();
}
float Club::getGyroZ() {
	return IMU->getGyroZ_rads();
}
float Club::getAccelX_mss() {
	return IMU->getAccelX_mss();
}
float Club::getAccelY_mss() {
	return IMU->getAccelY_mss();
}
float Club::getAccelZ_mss() {
	return IMU->getAccelZ_mss();
}

MPU9250* Club::getMPU() {
	return IMU;
}
