#include<stdio.h>

int main()
{
	printf("내목표는 세계제일 달리기왕이다 그러기엔 연습이 필요하지\n");
	printf("그래서 나는 연습을 하기로 마음을 단단히 먹었다.\n");

	int run;

	scanf("%d",&run);
	
	if(run)
	{
		printf("나는 %d번 달려서 세계제일 달리기왕이 되는 것을 해냈다.\n",run);
		printf("그래서 오래오래 행복하게 지냈다.\n");
	}
	
	else
	{
		printf("연습을 게을리해서 엄청나게 뚱뚱해졌다.\n");
		printf("나는 이제 아무것도 못할거야....\n");
	}
	
	printf("그렇게 생각하며 천천히 달려나갔다.");

	return 0;
}
