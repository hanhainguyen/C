#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[100][100],n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			printf("nhap gia tri cua phan tu A[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			printf("%4d",a[i][j]);
		
		}
		printf("\n");
	}
	int max = a[1][1];
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if(i==j)
			{
				if(a[i][j]>max)
				max=a[i][j];
			}
		}
	}
	printf("phan tu lon nhat tren duong cheo chinh la: %d",max);
	int min = a[1][1];
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if(i==j)
			{
				if(a[i][j]<min)
				min=a[i][j];
			}
		}
	}
	printf("\nphan tu nho nhat tren duong cheo chinh la: %d",min);
	int x;
	printf("\nnhap X = ");
	scanf("%d",&x);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if (a[i][j]==x)
			a[i][j]--;
		
			
		}
	}
	printf("\nMa tran sau khi xoa la:\n");
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			printf("%4d",a[i][j]);	
			
		}
		printf("\n");
	}
	
	

 return 0;
 }


