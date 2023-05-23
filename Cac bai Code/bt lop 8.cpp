#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	float n=1,t;
	printf("nhap so nguyen duong n ");;
	do 
	{
		if(n<=0)
		{
		
		printf("\nNhap lai");
		}
		scanf("%f",&n);
	}
	while(n<=0);
	{
		t= sqrt(n);
		if(t*t==n)
		printf("%.1f day la so chinh phuong",n);
		else
		printf("%.1f day khong la so chinh phuong",n);
		
	}

 return 0;
 }


