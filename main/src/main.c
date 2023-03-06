#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/timers.h"
#include "freertos/event_groups.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_netif.h"
#include "esp_http_server.h"

#include "wifi.h"
#include "http.h"




void app_main(void)
{
     nvs_flash_init();   
	 wifi_connection();  
     start_webserver();
}
