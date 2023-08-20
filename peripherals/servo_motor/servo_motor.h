/*
 * servo_motor.h
 *
 *  Created on: Aug 21, 2023
 *      Author: bhask
 */

#ifndef PERIPHERALS_SERVO_MOTOR_SERVO_MOTOR_H_
#define PERIPHERALS_SERVO_MOTOR_SERVO_MOTOR_H_

	void init();
	int WritePos(int ID, int Position);
	int Calibration(int ID, int speed);


#endif /* PERIPHERALS_SERVO_MOTOR_SERVO_MOTOR_H_ */
