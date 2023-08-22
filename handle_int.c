1 #include "main.h"
  2 
  3 /**
  4  * handle_int - prints ints
  5  * @args:arguements
  6  *
  7  * Return:int
  8  */
  9 
 10 int handle_int(va_list args)
 11 {
 12 unsigned int c = va_arg(args, int);
 13 
 14 write(1, &c, 1);
 15 
 16 return (1);
 17 }
