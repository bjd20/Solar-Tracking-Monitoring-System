/*
 * wifi.h
 *
 *  Created on: Aug 21, 2023
 *      Author: bhask
 */

#ifndef DRIVERS_WIFI_SETUP_WIFI_H_
#define DRIVERS_WIFI_SETUP_WIFI_H_

void wifiInit();
void getMAC();
void getIP();
void search_AcessPoint();
void getWifiStatus();
void OnDataSent(const int *mac_addr, int status);
void OnDataRecv(const int *mac_addr, char *incoming_data,int status);


#endif /* DRIVERS_WIFI_SETUP_WIFI_H_ */
