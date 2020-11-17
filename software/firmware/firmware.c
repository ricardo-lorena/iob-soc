//#include "stdlib.h"
#include "system.h"
#include "periphs.h"
#include "iob-uart.h"
#include "time.h"
//antigo
int main()
{
        int y=0;
	int y_1=0;
	int i,n;
	int x ;
	time_t t;
	uart_init(UART_BASE,FREQ/BAUD);
	srand((unsigned) time(&t));
	
	for(i=0;i<100; i++){
x=(rand());
y=2*y_1+x;
uart_printf("%d\n",y);
    

y_1=y;}
}
