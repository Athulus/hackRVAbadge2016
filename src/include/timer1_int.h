#ifndef timer1_int_h
#define timer1_int_h
void touchInterrupt();
void red(unsigned char onPWM) ;
void green(unsigned char onPWM) ;
void blue(unsigned char onPWM) ;
void backlight(unsigned char bright) ;
void timerInit();
void doPWM();

#endif

