#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{ 
	int n,x,s1=0,s2=0;
	printf("Nhap so n= ");
	scanf("%d",&n);
	printf("Nhap so x= ");
	scanf("%d",&x);
	for(int i=0; i<=n;i++)
	{
	  s1= s1 + pow(x,i);
	}
	printf("Tong S1= %d",s1);
	for(int i=0; i<=n;i++)
	{
	  s2= s2 + pow(-1,i)*pow(x,i);
	}
	printf("\nTong S2= %d",s2);
	

 return 0;
 }


