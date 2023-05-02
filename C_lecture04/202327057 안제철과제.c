#include<stdio.h>

int main()
{
	printf("적 캐릭터는 HP가 30 입니다.\n");
	printf("\n프로그램이 시작되면 다음과 같이 케릭터 메이킹 화면을 구성해 주세요.\n");
	printf("\n----------------------------------\n");
	int attack;
	int h=30 ;
	printf("주인공의 공격력울 입력하세요.\n");
	scanf("%d",&attack);
	printf("주인공은 공격력이 %d 입니다.\n",attack);
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n",attack);
	

	if(attack<h)
	{
		printf("\n적의 잔여 HP : %d\n",h-attack);
		printf("\n적이 주인공을 공격하여 주인공이 뒤졌습니다.\nGAME OVER\n------------------------------------");
	}
	else
	{
		printf("\n적의 잔여 HP : 0\n");
			printf("\n적을 물리쳤습니다!\nHAPPY END\n");
			printf("------------------------------------------------");
	}
	return 0;
}
