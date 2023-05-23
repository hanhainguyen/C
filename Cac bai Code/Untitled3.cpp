#include<stdio.h>
#include<math.h>

int main()
{
	int a[10000];
	int n;
	scanf("%d",&n);
	for ( int i=0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for ( int i=0; i<n;i++)
	{
		if(a[i]==0)
		{
			printf("\nKhong khieu nai!");
		}
	    else
		{
			printf("\nCo khieu nai!");
		 } 
	}
	

 return 0;
 }

