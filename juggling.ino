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

#include "XBee.h"
XBee xbee = XBee();

Club myClub;

void setup() {
	Serial.begin(9600);
	while (!Serial) {
	}
	Serial.println("Club Starting");
	myClub.init();
//	xbee.setSerial(Serial);

}

void loop() {
//	Serial.println("loop");

	myClub.readSensor();

//	String s = "";
//	s += String(myClub.getGyroX(), 3);
//	s += '$';
//	s += String(myClub.getGyroY(), 3);
//	s += '$';
//	s += String(myClub.getGyroZ(), 3);
//	s += '$';
//	s += String(myClub.getAccelX_mss(), 3);
//	s += '$';
//	s += String(myClub.getAccelY_mss(), 3);
//	s += '$';
//	s += String(myClub.getAccelZ_mss(), 3);
//	s += '$';
//	s += String(myClub.getMPU()->getTemperature_C(), 3);

//	byte buf[40];
//	if (s.length()>60)
//		s="Data too long";
//	s.getBytes(buf, 39, 0);
//
//	XBeeAddress64 addr64 = XBeeAddress64(0x00000000, 0x00000000);
//	ZBTxRequest zbTx = ZBTxRequest(addr64, buf, sizeof(buf));
//	ZBTxStatusResponse txStatus = ZBTxStatusResponse();

//	xbee.send(zbTx);
//
//	if (xbee.readPacket(200)) {
//		if (xbee.getResponse().getApiId() == ZB_TX_STATUS_RESPONSE) {
//			xbee.getResponse().getZBTxStatusResponse(txStatus);
//
//			if (txStatus.getDeliveryStatus() == SUCCESS) {
//			} else {
//			}
//		}
//	} else if (xbee.getResponse().isError()) {
//	} else {
//	}

	Serial.print(myClub.getGyroX(), 3);
	Serial.print("$");
	Serial.print(myClub.getGyroY(), 3);
	Serial.print("$");
	Serial.print(myClub.getGyroZ(), 3);
	Serial.print("$");
	Serial.print(myClub.getAccelX_mss(), 3);
	Serial.print("$");
	Serial.print(myClub.getAccelY_mss(), 3);
	Serial.print("$");
	Serial.print(myClub.getAccelZ_mss(), 3);
	Serial.print("$");
	Serial.print(myClub.getMPU()->getTemperature_C(), 3);

	Serial.println();
	delay(100);
}
