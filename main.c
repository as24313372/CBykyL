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
	printf("�п�J5��P�Ǧ��Z�G\n");
	for(i=0;i<5;i++)
	{	
		printf("��%d��P�ǦW�r�M���Z(ex:�ӭ� 100)�G",i+1);
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
	printf("�̰������O%s�A�ӥL�����ƬO%d\n",strmax,max);
	printf("�̧C�����O%s�A�ӥL�����ƬO%d\n",strmin,min);
	system("pause");
	return 0;
}
