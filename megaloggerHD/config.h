#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

/**************************************
* OBD-II Adapter options
**************************************/
//#define OBD_ADAPTER_I2C
#define OBD_ADAPTER_UART
#define OBD_PROTOCOL PROTO_AUTO

/**************************************
* Data logging options
**************************************/
// enable(1)/disable(0) data logging (if SD card is present)
#define ENABLE_DATA_LOG 0
#define SD_CS_PIN SS

/**************************************
* Data streaming options
**************************************/
// enable(1)/disable(0) data streaming
#define ENABLE_DATA_OUT 0

// uses software(1)/hardware(0) serial for data streaming
#define RF_SERIAL Serial
#define STREAM_BAUDRATE 115200 /* bps */

// this defines the format of data streaming
// FORMAT_BIN is required by Freematics OBD iOS App
// FORMAT_TEXT for text-based, text names for PID
#define STREAM_FORMAT FORMAT_TEXT

/**************************************
* GPS configuration
**************************************/
#define USE_GPS 0
#define GPSUART Serial2
#define MAX_GPS_PROCESS_TIME 50 /* ms */
#define GPS_DATA_TIMEOUT 2000 /* ms */

// GPS baudrate could be 38400bps or 115200bps
#define GPS_BAUDRATE 115200 /* bps */

/**************************************
* Accelerometer & Gyro
**************************************/
#define ACC_DATA_RATIO 10
#define GYRO_DATA_RATIO 100

/**************************************
* Boost Gauge configuration
**************************************/
#define USE_BOOST 0
#define BOOSTUART A15
#define BOOST_BAUDRATE 9600 /* bps */

/**************************************
* Boost Gauge configuration
**************************************/
#define WIFI 0

/**************************************
* LCD module (uncomment only one)
**************************************/
LCD_R61581 lcd; /* 3.5" CTE35IPS/R61581 based LCD */
//LCD_Null lcd;

#endif
