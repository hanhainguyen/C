#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[100],n,dem=0,dem1=0;
	printf("nhap so ptu cua mang ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		printf (" nhap phan tu a[%d]",i);
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n-1;i++)
	{
		if(a[i+1]>=a[i])
		dem++;
	} 
	for (int i=0;i<n-1;i++)
	{
		if(a[i+1]<=a[i])
		dem1++;
	}
	if(dem==n-1)
	printf("day la day tang dan ");
	else if (dem1==n-1)
	printf("day la day giam dan ");
	else
	printf("day k la phai la day giam hoac tang  ");


 return 0;
 }


