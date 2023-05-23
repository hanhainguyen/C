#include<stdio.h>
#include<math.h>
#include<string.h>
int kiemtra(int a)
{
	int dem=0;
	if(a<2)
	printf("%d khong phai la so nguyen to",a);
	for(int i=2;i<= sqrt(a);i++)
	{
		if(a % i==0)
		{
			dem++;
		}
	}
	if(dem==0)
		printf("\n%d la so nguyen to ",a);
	else 
		printf("\n%d khong phai la so nguyen to",a );
	
}

int main()
{
	int a;
	printf("Nhap a");
	scanf("%d",&a);
	kiemtra(a);

 return 0;
 }


