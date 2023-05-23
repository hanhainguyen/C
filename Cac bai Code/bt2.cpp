#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[1000];
	int n,tong;
	printf("nhap so phan tu:");
	scanf("%d",&n);	
	for(int i=0; i<n;i++)
	{
		printf("nhap so:");
		scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
    	printf("%5d",a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(-15<=a[i] && a[i]<=10)
		tong=tong+a[i];
	}
	printf("\ntong la: %d",tong);
 return 0;
 }

