#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[100][100];
	int n,m;
	int dem=0,s=0;
	float tb=0;
	printf("Nhap m,n");
	scanf ("%d %d",&m,&n);
	for (int i=1;i<=m;i++)//hang
	{
		for(int j=1;j<=n;j++)//cot
		{
			printf("Nhap a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
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
	// tbinh cong 
	for (int i=1;i<=m;i++)//hang
	{
		for(int j=1;j<=n;j++)//cot
		{
			if (a[i][j]%2==0 && a[i][j]>10 )
			{
				dem++;
				s= s+ a[i][j];
				
			}
			
		}
	}
	tb = s/dem;
	if(dem>=1)
	printf("\nTBC cac ptu chan lon hon 10 la %f ",tb);
	else
	printf("\nK co truong hop nao ");
	// gai tri lon nhat 
	int max=a[1][1];
	for (int i=1;i<=m;i++)//hang
	{
		for(int j=1;j<=n;j++)//cot
		{
			if ( a[i][j]>max)
			{	
				max = a[i][j];
			}
			
		}
	}
	printf("\nSo lon nhat la %d", max);
	
	
	
	


 return 0;
 }


