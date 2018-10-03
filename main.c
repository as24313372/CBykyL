#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	int num[5];
	int i,max,min,x,n;
	char str[50];
	char strmax[50];
	char strmin[50];
			max=min=num[0];
	printf("請輸入5位同學成績：\n");
	for(i=0;i<5;i++)
	{	
		printf("第%d位同學名字和成績(ex:帥哥 100)：",i+1);
		scanf("%s %d",str,&num[i]);
		if(num[i]>max)
		{
			max=num[i];
			memmove(strmax,str,50);
		}
		if(num[i]<min)
		{
			min=num[i];
			memmove(strmin,str,50);
		}
	}
	printf("最高分的是%s，而他的分數是%d\n",strmax,max);
	printf("最低分的是%s，而他的分數是%d\n",strmin,min);
	system("pause");
	return 0;
}
