#include<reg51.h>

void delay()
{
	int i;
	for(i = 0; i < 20; i++)
	{
		TMOD = 0X01;
		TL0 = 0XB0;
		TH0 = 0X3C;
		TR0 = 1;
		while(TF0 == 0)
		{
		  TF0 = 0;
		  TR0 = 0;			
		}
	}
}

void main()
{
	P2 = 0X00;
	while(1){
		P2 = 0X00;
		delay();
		P2 = 0XFF;
		delay();
	}
}