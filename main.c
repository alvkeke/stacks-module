#include "main.h"
#include "mystacks.h"

int main(int argc, char const *argv[])
{
	//初始化栈
	stacksinit();

	int i;
	WORD u;

	//printf("%u, %d\n\n\n", -1, 4294967295);

	for(i = -10; i<11; i++){
		push((void*)&i);
	}

	for(i = -10; i<11; i++){
		pop((void*)&u);
		printf("%d:%u\n", u, u);
	}

	//暂停,用于查看输出
	scanf("%d%d%d");

	return 0;
}
