#include<reg52.h>
#include<intrins.h> 
typedef unsigned int u16; 
typedef unsigned char u8;
sbit beep=P1^5;

void delay(u16 i)
{
while(i--);
}

void main()//难找串口的脉冲启动的蜂鸣器
{
while(1)
{
beep=~beep;
delay(100);
}
}
