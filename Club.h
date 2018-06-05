/*
 * Club.h
 *
 *  Created on: 30 mai 2018
 *      Author: sfleury
 */

#ifndef CLUB_H_
#define CLUB_H_

#include "MPU9250.h"

class Club {

public:
	Club();
	virtual ~Club();
	void init();
	String printGyroSensor();
	MPU9250* getMPU();
	int readSensor();
	float getGyroX();
	float getGyroY();
	float getGyroZ();
	float getAccelX_mss();
	float getAccelY_mss();
	float getAccelZ_mss();
private:
	MPU9250 *IMU;
};

#endif /* CLUB_H_ */
