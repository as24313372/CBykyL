#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int count,i;
	count =0;
	for(i=1;i<51;i++)
	{
		if(i%2==0)
			count+=i;
	}
	printf("總數為°%d\n",count);
	system("pause");
	return 0;
}
