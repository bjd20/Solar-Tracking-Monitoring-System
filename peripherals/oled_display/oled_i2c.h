/*
 * oled_i2c.h
 *
 *  Created on: Aug 21, 2023
 *      Author: bhask
 */

#include i2c;
#ifndef PERIPHERALS_OLED_DISPLAY_OLED_I2C_H_
#define PERIPHERALS_OLED_DISPLAY_OLED_I2C_H_

void init();
void clear_disp();
void config_disp(int color, int rows, int backlit);
void move_cursor(int x, int y);
void write_disp(char data[]);




#endif /* PERIPHERALS_OLED_DISPLAY_OLED_I2C_H_ */
