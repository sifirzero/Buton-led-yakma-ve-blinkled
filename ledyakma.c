#include<12f683.h>
#fuses INTRC_IO,nomclr
#use delay (clock=4m)

int i=0;

void main()
{

while(true)
{

if(input(pin_a1))
{
output_high(pin_a0);
}
else
{
output_low(pin_a0);
}


output_high(pin_a2);
delay_us(250);
output_low(pin_a2);
delay_us(250);


}
}
