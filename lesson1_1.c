#include<reg52.h> //51单片机内部寄存器的定义
//点亮实验板上的第一个二极管
//发光二极管一边接VCC+5V我们要给的是低电平（发光二极管压降1.7V，工作电流3mA-10mA，计算出电阻300Ω-1kΩ，根据需要多亮来）
//锁存器，让输出端与输入端保持一致（当给予锁存器高电平时）因为使用部分有重复，防止影响
 //把单片机的第一个管脚起个名字叫D1,格式是固定的
sfr x = 0xA0;
void delay(unsigned int i)
{
	while(i--);
}
void main()
{
while(1){
x=0xfe;
delay(50000);
x=0xfd;
delay(50000);
x=0xfb;
delay(50000);
x=0xf7;
delay(50000);
x=0xef;
delay(50000);
x=0xdf;
delay(50000);
x=0xbf;
delay(50000);
x=0x7f;
delay(50000);
}
}
//下载到单片机中，一般有两种文件，一种是hex文件一种是bit文件
//用段操作让led亮起来
