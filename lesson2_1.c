#include<reg52.h>
sbit p1_1=P2^0;
void delay(unsigned int i){while(i--);}
void main(){
while(1){
	p1_1=0;
delay(51000);delay(51000);
	p1_1=1;
delay(51000);delay(51000);
}
}//直接利用单片机计算时间延时一秒，需调试
