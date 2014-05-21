#include <string>
#include <cstring>

#include "spark.h"

char getSparkByPrecentage(unsigned value) {
   char ticks = "▁▂▃▄▅▆▇█";

   unsigned tickVal = (float(value) / 8);

   return ticks[tickVal];
}


char getSparkByValue(unsigned value, unsigned max) {
   char ticks = "▁▂▃▄▅▆▇█";

   unsigned tickVal = (float(value) / float(max) * 8);

   return ticks[tickVal];
}

/*
 * TODO
 * This function should accept an array of values,
 * and output length, find max and min in the array 
 * and output n-sized spark line
 * in this case template-based input arg may be needed
 * This: http://rosettacode.org/wiki/Sparkline_in_unicode#C.2B.2B
 * approach might work too, but it's more complicated
char getSparkFromValues(){

}

*/
