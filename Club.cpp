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
	IMU->readSensor();
	String sensor;
	// display the data
	sensor = "Accel=";
	sensor += "[";
	sensor += String(IMU->getAccelX_mss());
	sensor += "\t";
	sensor += String(IMU->getAccelY_mss());
	sensor += "\t";
	sensor += String(IMU->getAccelZ_mss());
	sensor += "]";
	sensor += " Gyro=";
	sensor += "[";
	sensor += String(IMU->getGyroX_rads());
	sensor += "\t";
	sensor += String(IMU->getGyroY_rads());
	sensor += "\t";
	sensor += String(IMU->getGyroZ_rads());
	sensor += "]";
	sensor += " Mag=";
	sensor += "[";
	sensor += String(IMU->getMagX_uT());
	sensor += "\t";
	sensor += String(IMU->getMagY_uT());
	sensor += "\t";
	sensor += String(IMU->getMagZ_uT());
	sensor += "]";
	sensor += " TempC=";
	sensor += "[";
	sensor += String(IMU->getTemperature_C());
	sensor += "]";

	//  Serial.print(IMU.getAccelX_mss(),6);
	//  Serial.print("\t");
	//  Serial.print(IMU.getAccelY_mss(),6);
	//  Serial.print("\t");
	//  Serial.print(IMU.getAccelZ_mss(),6);
	//  Serial.print("\t");
	//  Serial.print(IMU.getGyroX_rads(),6);
	//  Serial.print("\t");
	//  Serial.print(IMU.getGyroY_rads(),6);
	//  Serial.print("\t");
	//  Serial.print(IMU.getGyroZ_rads(),6);
	//  Serial.print("\t");
	//  Serial.print(IMU.getMagX_uT(),6);
	//  Serial.print("\t");
	//  Serial.print(IMU.getMagY_uT(),6);
	//  Serial.print("\t");
	//  Serial.print(IMU.getMagZ_uT(),6);
	//  Serial.print("\t");
	//	Serial.print(IMU.getTemperature_C(), 6);
//		Serial.println();
	return sensor;
}

