#include<stdio.h>
int main()
{
    signed int r,num,rev=0;
    scanf("%d",&num);
	while(num>0)
	{
		r=num%10;
		rev=rev*10+r;
		num=num/10;	
	}
	printf("%d",rev);
	return 0;
}
