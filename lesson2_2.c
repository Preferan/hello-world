#include<reg52.h>
#define uint unsigned int
#define uchar unsigned char
sbit D1=P2^0;

void delay();

void main()
{
	D1=0;
	delay();
	D1=1;
	delay();
}

void delay()
{
	int x,y;
	for(x=95;x>0;x--)
		for(y=1200;y>0;y--);
}//利用子函数延时，需调试
