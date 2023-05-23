#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n;
	int a[100];
	printf(" Nhap So phan tu la ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf("Nhap so cho phan tu %d  ",i);
		scanf("%d",&a[i]);
	}
	float max;
	max = (a[1]/1);
	for (int i=1;i<=0;i++)
	{
		if((a[i]/i)>max)
		max = (a[i]/i);
	}
	printf("\nGia tri lon nhat la %.2f ",max);
	// tinh tong cac phan tu duong 
	int tong=0;
	for (int i=1;i<=n;i++)
	{
		if(a[i]>0)
		tong = tong + a[i];
	}
	printf("\nTong so ptu duong cua ma tran la %d",tong);
	int x,dem=0;
	printf("\nNhap vao gia tri cua x ");
	scanf("%d",&x);
	for(int i=1;i<=n;i++)
	{
		if(abs(a[i])>x)
		dem++;
	}
	printf("\nTong cac so co gtri tuyet do lon hon x la %d",dem);
	printf("\nGom cac so la ");
	for (int i=1;i<=n;i++)
	{
		if(abs(a[i])>x)
		printf("\n%d",a[i]);
	}
	

 return 0;
}
