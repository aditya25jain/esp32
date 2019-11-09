#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event_loop.h"
#include "esp_log.h"
#include "nvs_flash.h"

/*
* call this function to connect to wifi
* @params Wifi SSID
* @params Wifi Password 
*/
void initialise_wifi(uint8_t wifi_ssid[32], uint8_t wifi_password[64]);
