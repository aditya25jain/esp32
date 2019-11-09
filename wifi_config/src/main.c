#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event_loop.h"
#include "esp_log.h"
#include "nvs_flash.h"

#include "app_esp_wifi_connect.h"

void app_main()
{
    uint8_t ssid[32] = "Redmi y2";
    uint8_t pass[64] = "anjujain";
    ESP_ERROR_CHECK( nvs_flash_init() );
    initialise_wifi(ssid, pass);
    while (1)
    {
        sleep(10);
        /* code */
    }
}