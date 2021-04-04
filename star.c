#include<stdio.h>

int main()
{
	int i,n,j,s,t,k;
	scanf("%d",&n);
	
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>i;j--)
			printf(" ");
		
		printf("!");
		
		if(i>=1)
		{
			for(j=1;j<=2*i-1;j++)
				printf(" ");
			printf("!");
		}		
	printf("\n");	
	}
	
	for(s=0;s<2*n-1;s++)
		printf("!");
		
	return 0;
}
