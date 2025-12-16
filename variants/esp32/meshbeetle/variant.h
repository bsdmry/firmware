
#define BATTERY_PIN 39 // A battery voltage measurement pin, voltage divider connected here to measure battery voltage
// ratio of voltage divider = 2.0 (R42=100k, R43=100k)
#define ADC_MULTIPLIER 2.01 // 2.0 + 10% for correction of display undervoltage.
#define ADC_CHANNEL ADC1_GPIO39_CHANNEL

#define I2C_SDA 21 // I2C pins for this board
#define I2C_SCL 22

#define USE_SSD1306
#define TFT_WIDTH 128
#define TFT_HEIGHT 64


#define LED_PIN 14    // If defined we will blink this LED
#define BUTTON_PIN 25 // If defined, this will be used for user button presses,
#define BUTTON_NEED_PULLUP

#define USE_RF95
#define LORA_MISO 5
#define LORA_MOSI 13
#define LORA_SCK 10
#define LORA_CS 9
#define LORA_RESET 27
#define LORA_DIO0 18
#define LORA_DIO1 23
#define LORA_DIO2 19
#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN
//#define GPS_RX_PIN 30
//#define GPS_TX_PIN 31

