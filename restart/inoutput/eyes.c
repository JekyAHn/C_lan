#include<stdio.h>

int start()
{
	printf("당신은 눈치를 몰래봐야 합니다 안걸리게 조심하세요.\n");
	printf("몇번 눈치를 볼까요??\n");

	return 0;
}
int main()
{
	start();
	int eye;

	scanf("%d",&eye);
	
	printf("당신은 %d번 눈치를 보았습니다.",eye);

	return 0;
}
