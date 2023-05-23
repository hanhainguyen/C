#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[100][100];
	int n;
	int dem=0;
	printf("Nhap ma tran vuong cap : ");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("Nhap a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMa tran vua nhap la \n");
	for (int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%5d",a[i][j]);
			
		}
		printf("\n");
	}
	
	for (int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(a[i][j]!=0)
			dem++;
			
		}
	}
	if(dem<=1)
	printf("\nDay la ma tran tam giac tren");
	else 
	printf("\nDay khong phai la ma tran tam giac tren");
	int x=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[i][j]>x)
			x=a[i][j];
			
		}
	}
	printf("\nGia tri lon nhat nam phia tren duong cheo chinh la : %d ",x);
	
return 0;
}
