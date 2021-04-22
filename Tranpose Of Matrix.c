#include <stdio.h>
void main()
{
	int arr[50][50],brr[50][50],i,j,r,c;
	printf("Enter no.of rows and columns of the matrix : ");
	scanf("%d %d",&r,&c);
	printf("Enter elements of the matrix :\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	scanf("%d",&arr[i][j]);
	}
	}
	printf("\nThe matrix is :\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	printf("%d\t",arr[i][j]);
	}
	printf("\n");
	}
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	brr[j][i]=arr[i][j];
	}
	}
	printf("\nThe transpose of a matrix is : ");
	for(i=0;i<c;i++)
	{
	for(j=0;j<r;j++)
	{
	printf("%d\t",brr[i][j]);
	}
	printf("\n");
	}
}
