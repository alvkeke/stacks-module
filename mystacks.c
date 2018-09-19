#include "mystacks.h"

#include <stdio.h>

//WORD stacksbuf[MAXSTACKS];

//stacksinit函数,用于初始化栈,将指针置-1,清空栈内容
void stacksinit(){
	pos = -1;
	memset(stacksbuf, 0, MAXSTACKS*sizeof(WORD));
}

//push函数,用于将数据推入栈内
int push(void *data){
	//定义用于暂时存放数据的变量,WORD,设置为0
	//定义用于进行循环的变量
	WORD tmp = 0;
	int i;

	//判断是否到栈顶
	if(pos>=MAXSTACKS)return-1;

	//进入循环,将传入的数据一位一位的存入tmp内
	for(i = 31; i>=0; i--){
		//将最高位的数据取出,放入tmp的最低位
		tmp+=((*(WORD*)data)>>i)&1;
		//将tmp向左移位,直到最低位时不移位
		if(i!=0) tmp<<=1;
	}

	//弹入数据
	stacksbuf[++pos] = tmp;

	return 0;
}

//pop函数,用于将数据出栈
int pop(void *buf){
	//判断栈是否为空
	if(pos<=-1){
		//如果栈空则返回-1
		return -1;
	}else{
		//取出栈顶的数据
		(*(WORD*)buf) = stacksbuf[pos--];
	}

	return 0;
}