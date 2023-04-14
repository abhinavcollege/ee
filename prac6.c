#include<reg51.h>

void delay(unsigned int ms)
{
	unsigned int i,j;
	for(i = 0; i < ms; i++)
	{
	  for(j = 0; j < 1273; j++){}
	}Q
}

void main()
{
	char number[] = {0X3F, 0X00, 0X5B, 0X47, 0X6D, 0X7D, 0X7F, 0X6F};
	int i, j;
	P2 = 0X00;
	P3 = 0X00;
	while(1)
	{
		for(i = 0; i <= 9; i++)
		{
			P2 = number[i];
			for(j = 0; j <= 9; j++)
			{
				P3 = number[j];
				delay(50);
			}
		}
	}
}