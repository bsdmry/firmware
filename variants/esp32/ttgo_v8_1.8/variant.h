//https://www.bastelgarage.ch/lilygo-ttgo-t8-v1-8-esp32-wrover-development-board-1-2508

#define BATTERY_PIN 35 // A battery voltage measurement pin, voltage divider connected here to measure battery voltage
// ratio of voltage divider = 2.0 (R42=100k, R43=100k)
#define ADC_MULTIPLIER 2.11 // 2.0 + 10% for correction of display undervoltage.
#define ADC_CHANNEL ADC1_GPIO35_CHANNEL

#define I2C_SDA 23 // I2C pins for this board
#define I2C_SCL 22

#define USE_SSD1306
#define TFT_WIDTH 128
#define TFT_HEIGHT 64


#define LED_PIN 15    // If defined we will blink this LED
#define BUTTON_PIN 32 // If defined, this will be used for user button presses,
#define BUTTON_NEED_PULLUP

/*
  Pin connections from ESP32-D0WDQ6 to SX1278.
*/
#define USE_RF95
#define LORA_MISO 21
#define LORA_MOSI 19
#define LORA_SCK 18
#define LORA_CS 4
#define LORA_RESET 2
#define LORA_DIO0 14
#define LORA_DIO1 12
#define LORA_DIO2 13
#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN
//#define GPS_RX_PIN 30
//#define GPS_TX_PIN 31

