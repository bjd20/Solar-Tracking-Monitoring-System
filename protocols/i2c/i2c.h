/*
 * i2c.h
 *
 *  Created on: Aug 21, 2023
 *      Author: bhask
 */

#ifndef PROTOCOLS_I2C_I2C_H_
#define PROTOCOLS_I2C_I2C_H_


void init();
void sync_CLK();
void send_data(char data[]);
void rcv_data();



#endif /* PROTOCOLS_I2C_I2C_H_ */
