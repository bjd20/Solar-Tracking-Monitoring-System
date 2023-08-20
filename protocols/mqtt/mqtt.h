/*
 * mqtt.h
 *
 *  Created on: Aug 21, 2023
 *      Author: bhask
 */

#ifndef PROTOCOLS_MQTT_MQTT_H_
#define PROTOCOLS_MQTT_MQTT_H_


void init();
void config_subscribers();
void on_connect();
void client_task(int clientID);
void on_message(int clientID,char msg[]);




#endif /* PROTOCOLS_MQTT_MQTT_H_ */
