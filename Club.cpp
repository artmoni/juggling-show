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
}

String Club::printGyroSensor() {
	if (IMU->readSensor() < 0)
		return "Sensor not ready";

	String sensor = "";
//	// display the data
	sensor += "Accel=";
	sensor += "[";
	sensor += String(IMU->getAccelX_mss(), 6);
	sensor += " / ";
	sensor += String(IMU->getAccelY_mss(), 6);
	sensor += " / ";
	sensor += String(IMU->getAccelZ_mss(), 6);
	sensor += "]";
	sensor += " Gyro=";
	sensor += "[";

//	char buf[20];
//	dtostrf(IMU->getGyroX_rads(), 8, 2, buf);
	sensor += String();
//	sensor += String(buf[0]);

//	sensor += "\t";
//	sensor += String((double)IMU->getGyroY_rads());
//	sensor += "\t";
//	sensor += String(IMU->getGyroZ_rads(), 6);
//	sensor += "]";
//	sensor += " Mag=";
//	sensor += "[";
//	sensor += String(IMU->getMagX_uT());
//	sensor += "\t";
//	sensor += String(IMU->getMagY_uT());
//	sensor += "\t";
//	sensor += String(IMU->getMagZ_uT());
//	sensor += "]";
//	sensor += " TempC=";
//	sensor += "[";
//	sensor += String(IMU->getTemperature_C());
//	sensor += "]";

	return sensor;
}

void Club::readSensor(){
	IMU->readSensor();
}

float Club::getGyroX()
{
	return IMU->getGyroX_rads();
}
float Club::getGyroY()
{
	return IMU->getGyroY_rads();
}
float Club::getGyroZ()
{
	return IMU->getGyroZ_rads();
}

MPU9250* Club::getMPU() {
	return IMU;
}
