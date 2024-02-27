#include &lt;lpc214x.h&gt;
void delay_ms(unsigned int count)
{
unsigned int j=0,i=0;
for(j=0;j&lt;count;j++)
{
for(i=0;i&lt;3000;i++);
}
}
/* start the main program */
int main()
{
PINSEL0 = 0x0000; //Configure the P1 Pins for GPIO;
IODIR0 = 0xFF; //Configure the P1 pins as OUTPUT;
while(1)
{
IOSET0 = 0xFF; // Make all the Port pins as high
delay_ms(100);
IOCLR0 = 0xFF; // Make all the Port pins as low
delay_ms(100);
}
return 0 ;
}