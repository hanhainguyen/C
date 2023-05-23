#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n,dem=0; 
	int a[1000];
	printf("Nhap so phan tu:");
	scanf("%d",&n);
	
	for(int i=1; i<=n;i++)
	{
	   printf("Nhap so:");
	   scanf("%d",&a[i]);	
	}
	for(int i=1; i<=n;i++)
	{
		if(a[i]%2==0)
		dem++;
	}
	printf("so phan tu chan la: %d",dem);

 return 0;
 }

