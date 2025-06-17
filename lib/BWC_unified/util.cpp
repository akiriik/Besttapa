#include "util.h"

float C2F(float c)
{
   return c*1.8+32;
}

float F2C(float f)
{
   return (f-32)/1.8;
}

int gpio2dp(int gpio)
{
   switch(gpio) {
       case 16: return 0;  // GPIO16 = D0
       case 5:  return 1;  // GPIO5 = D1
       case 4:  return 2;  // GPIO4 = D2
       case 0:  return 3;  // GPIO0 = D3
       case 2:  return 4;  // GPIO2 = D4
       case 14: return 5;  // GPIO14 = D5
       case 12: return 6;  // GPIO12 = D6
       case 13: return 7;  // GPIO13 = D7
       case 15: return 8;  // GPIO15 = D8
       default: return -1;
   }
}

int dp2gpio(int dp)
{
   switch(dp)
   {
       case 0: return 16;  // D0 = GPIO16
       case 1: return 5;   // D1 = GPIO5
       case 2: return 4;   // D2 = GPIO4
       case 3: return 0;   // D3 = GPIO0
       case 4: return 2;   // D4 = GPIO2
       case 5: return 14;  // D5 = GPIO14
       case 6: return 12;  // D6 = GPIO12
       case 7: return 13;  // D7 = GPIO13
       case 8: return 15;  // D8 = GPIO15
       default: return -1;
   }
}