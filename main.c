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
	printf("Á`¼Æ¬°%d\n",count);
	system("pause");
	return 0;
}
