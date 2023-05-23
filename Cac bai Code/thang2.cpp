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
