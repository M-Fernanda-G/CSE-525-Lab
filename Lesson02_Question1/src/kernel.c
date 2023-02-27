#include "printf.h"
#include "utils.h"
#include "mini_uart.h"

void kernel_main(void)
{
	uart_init();
	init_printf(0, putc);
	int el = get_el();
	printf("Exception level: %d \r\n", el);
   printf("Lesson 2 Question 1 Done!");

	while (1) 
   {
		uart_send(uart_recv());
	}
}