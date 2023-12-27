#include <stdio.h>
#include "cchalk.h"
#include "esp_log.h"

void app_main(void)
{
    ESP_LOGI("main", "A log message");
    ESP_LOGI("main", "some other message I don't care about");
    chalk_printf_ln(CHALK_CYAN1, "finnaly a message I care about");
    ESP_LOGI("main", "A forth message I don't care about");
    ESP_LOGI("main", "A fith message I don't care about");
}
