#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[2][2],b[2][2];
	//printf("nhap so hang ");
	//scanf("%d",&n);
	//printf("nhap so cot ");
	//scanf("%d",&m);
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("nhap a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("nhap b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("mang a\n ");
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			printf ("%3d",a[i][j]);
			
		}
		printf("\n");
	}
	printf("\nmang b\n");
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			printf ("%3d",b[i][j]);
			
		}
		printf("\n");
	}
	printf("\nmang c\n");
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			printf ("%3d",a[i][j]-b[i][j]);
			
		}
		printf("\n");
	}
	int tong=0;
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			if((a[i][j]+b[i][j])%2==0)
			tong=tong+(a[i][j]+b[i][j]);
			
		}
		
	}
	printf("\n tong cac ptu chan trong mang c la %d",tong);


 return 0;
 }


