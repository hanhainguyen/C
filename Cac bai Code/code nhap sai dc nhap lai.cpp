#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
 	int n,c=0;
 	int m=1;
 	while (c==0)
 	{
        printf("nhap so ");
 		scanf("%d",&n);
 		if(n<8)
 		c=1;
 		if(n>8)
 		printf("Nhap sai roi\n");
 	}
	for( int i=1; i<=n;i++)
	{
		m=m*i;
	}
	printf("giai thua cua n la: %d",m);
			

 return 0;
 }


