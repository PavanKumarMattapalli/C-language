#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter Any Number:");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		printf("\n%d ",i);
		--i;
	}
	return 0;
}

