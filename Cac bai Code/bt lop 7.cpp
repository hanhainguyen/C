#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n,s=0;
	do 
	{
		scanf("%d",&n);
		if( n<= 0)
		printf("\nNhap lai n:");
	}
	while( n<=0);
	for (int i=1; i<=n;i++)
	{
		if(n%i==0)
		s+=i;
	}
	printf("\nTong cac uoc so la: %d",s);

 return 0;
 }


