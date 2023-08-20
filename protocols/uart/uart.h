/*
 * uart.h
 *
 *  Created on: Aug 21, 2023
 *      Author: bhask
 */

#ifndef PROTOCOLS_UART_UART_H_
#define PROTOCOLS_UART_UART_H_

void init();
void set_baudRate(int bR);
void send_data(char data[]);
void rcv_data();



#endif /* PROTOCOLS_UART_UART_H_ */
