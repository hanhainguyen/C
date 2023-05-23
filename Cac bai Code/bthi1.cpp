#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[1000];
	int n;
	printf("Nhap so phan tu ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("Nhap gia tri cua phan tu a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\nNhung phan tu vua nhap la\n ");
	for(int i=1;i<=n;i++)
	{
		printf("%5d",a[i]);
	}
	int max=a[1];
	for(int i=1;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\nGia tri lon nhat cua day so vua nhp la %d",max);

 return 0;
 }


