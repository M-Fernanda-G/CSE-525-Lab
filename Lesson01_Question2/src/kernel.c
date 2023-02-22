#include "mini_uart.h"

void kernel_main(void)
{
	uart_init();
	uart_send_string("Lesson 1 Question 2 Done!\r\n");

	while (1) 
   {
		uart_send(uart_recv());
	}
}