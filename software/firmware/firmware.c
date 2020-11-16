//#include "stdlib.h"
#include "system.h"
#include "periphs.h"
#include "iob-uart.h"

int main()
{
  //init uart 
   int i, t1=0, t2=1, nextTerm;
 uart_init(UART_BASE,FREQ/BAUD);
  for (i=1;i<=100;++i){
    uart_printf("%d\n",t1);
	nextTerm=t1+t2;
	t1=t2;
	t2=nextTerm;}
}
