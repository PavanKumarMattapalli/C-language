#include<stdio.h>
int main()
{
  	int i,n,res=0;
  	printf("Enter Any Number:");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
        {
	      if(n%i==0)
           res++;
        }
        {
		   if (res==2)
           printf("prime");
           else
           printf("not a prime");
       }
       return 0;
}
