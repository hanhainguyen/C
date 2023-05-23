#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[5],i;
	for ( i=1;i<=5;i++)
	{
		printf("nhap vao phhan thu thu A[%d]",i);
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=5;i++)
	{
		printf("%5d",a[i]);
	}
	int max=a[0],n;
	for ( i=1;i<=5;i++)
	{
		if(max<a[i])
		max=a[i];
		i=n;
		
	}
	printf("\ngia tri lon nhat la A[%d]= %d");
	int tong=0,tich=1;
	for (int i=1;i<=5;i++)
	tong=tong+a[i];
	printf("tong cua cac phan tu %d\n",tong);
	for(int i=1;i<=5;i++)
	tich=tich*a[i];
	printf("tich cua cac phan tu %d\n",tich);
	

 return 0;
 }


