#include<stdio.h>
#include<math.h>
#include<string.h>
int tamgiac(int a, int b, int c)
{
	int p,s;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return p;
}
int main()
{
	int x,y,z;
	printf("Nhap do dai 3 canh ");
	scanf("%d %d %d",&x,&y,&z);
	printf("chu vi tam giac la %d",x+y+z);
	printf("\ndien tich tam giac la %d ",tamgiac(x,y,z));
	

 return 0;
 }


