#include<reg52.h>
#include<intrins.h>
#define uint unsigned int
#define uchar unsigned char

uchar temp;

void delay();

void main()//究极跑马灯
{ int i=8;
	temp=0xfe;
	while(i--)
	{
		P2=temp;
		temp=_crol_(temp,1);
		delay();
	}
	i=8;
		while(i--)
	{
		temp=_cror_(temp,1);
		P2=temp;
		delay();
	}
}

void delay()
{
	uint x,y;
	for(x=150;x>0;x--)for(y=20;y>0;y--);
}
