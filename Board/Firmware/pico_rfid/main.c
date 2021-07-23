#include <stdio.h>
#include "pico/stdlib.h"

int main(){
    const uint led_pin = 25;

    //initialize LED pin
    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);

    stdio_init_all();
    while (true) {
        gpio_put(led_pin, true);
        sleep_ms(50);
        gpio_put(led_pin, false);
        sleep_ms(1000);
        printf("Blinking");
    }
}