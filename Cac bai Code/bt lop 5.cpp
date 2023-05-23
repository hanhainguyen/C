#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a;
	float tong1=0,tong2=0,tong3=0,tong4=0;
	printf("nhap so:");
	scanf("%d",&a);
	for(float i=1; i<=a;i++)
	{
		tong1= tong1 +1/i;
	}
	printf("Tong S(n)1= %f",tong1);
	for(float i=1; i<=a;i++)
	{
		tong2= tong2 +1/(2*i+1);
	}
	printf("\nTong S(n)2= %f",tong2);
	for(float i=1; i<=a;i++)
	{
		tong3= tong3 +1/i*(i+1);
	}
	printf("\nTong S(n)3= %f",tong3);
	for(float i=1; i<=a;i++)
	{
		tong4= tong4 + (2*i+1)/(2*i+2);
	}
	printf("\nTong S(n)4= %f",tong4);
	
	
 return 0;
 }

