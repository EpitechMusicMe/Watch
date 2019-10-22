#ifndef __DFRobot_HEARTRATE__H
#define __DFRobot_HEARTRATE__H
          

#include "Arduino.h"


#define ANALOG_MODE 0
#define DIGITAL_MODE 1


#define SAMPLE_NUMBER 100


class DFRobot_Heartrate
{
public:
    DFRobot_Heartrate(char mode) { mode_ = mode; }
      char maxNumber(uint8_t count);
      void minNumber(uint8_t count);
      uint16_t analogGetRate(void);
      uint16_t digitalGetRate(void);
      uint16_t getRate(void);
    uint8_t getCnt(void); 
      uint16_t getValue(uint8_t pin); 
  
private:  
    uint8_t mode_;  
    uint8_t valueCount_=255;
    uint8_t valueFlag;  
  uint32_t nowTim=0,lastTim=0;
  
};

#endif
