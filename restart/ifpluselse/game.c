#include<stdio.h>

int main()
{
	printf("공격력을 입력하여 상대방을 처치해야 합니다.\n");
	printf("공격력을 입력하여 주세요.\n");
	
	int attack;
	int hp=50;
	
	scanf("%d",&attack);

	printf("당신의 공격력은 %d입니다.\n",attack);
	printf("상대방의 체력은 50입니다.\n");
	
	if(attack>hp)
	{
		printf("적의 잔여 hp 0\n");
		printf("상대방 처리를 성공하였습니다.\n");
		printf("게임이 종료 됩니다.\n");
	}
	else
	{
		printf("상대방의 남은체력은 %d입니다.\n",hp-attack);
		printf("당신은 역공을 맞아 죽었습니다.");	
	}
	return 0;
}
