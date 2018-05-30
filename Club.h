/*
 * Club.h
 *
 *  Created on: 30 mai 2018
 *      Author: sfleury
 */

#ifndef CLUB_H_
#define CLUB_H_

#include "MPU9250.h"
#include "Wire.h"

class Club {

public:
	Club();
	virtual ~Club();
	void init();
	String printGyroSensor();

private:
	MPU9250 *IMU;
};

#endif /* CLUB_H_ */
