#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[100][100];
	int n,m;
	printf("Nhap m");
	scanf("%d",&m);
	printf("Nhap n");
	scanf ("%d",&n);
	for (int i=1;i<=m;i++)//hang
	{
		for(int j=1;j<=n;j++)//cot
		{
			printf("Nhap a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMa tran vua nhap la \n");
	for (int i=1;i<=m;i++)//hang
	{
		for(int j=1;j<=n;j++)//cot
		{
			printf("%5d",a[i][j]);
			
		}
		printf("\n");
	}
	float tong=0;
	for (int i=1;i<=m;i++)//hang
	{
		for(int j=1;j<=n;j++)//cot
		{
			if(j%2!=0)
			tong = tong + a[i][j];
		}
	}
	printf("\nTong cac ptu thuoc cot le cua ma tran %.2f",tong);
	int max=a[1][1];
	int x,y;
	for (int i=1;i<=m;i++)//hang
	{
		for(int j=1;j<=n;j++)//cot
		{
			if ( a[i][j]>max)
			{	
				max = a[i][j];
				x=i;
				y=j;
			}
			
		}
	}
	printf("\nSo lon nhat la %d o vi tri la a[%d][%d]", max,x,y);
	
return 0;
}
