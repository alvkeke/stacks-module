#include <string.h>

#define MAXSTACKS 2048
//定义在栈中的数据
typedef unsigned int WORD;

//定义栈所占用的内存空间(数组)
WORD stacksbuf[MAXSTACKS];
//定义定义栈此时的指针
int pos;


//stacksinit函数,用于初始化栈,将指针置-1,清空栈内容
void stacksinit();
//push函数,用于将数据推入栈内
int push(void *data);
//pop函数,用于将数据出栈
int pop(void *buf);