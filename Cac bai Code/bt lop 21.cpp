#include<stdio.h>
#include<math.h>
#include<string.h>
int gt(int a)
{
	int ketqua;
	if(a<0)
	ketqua = 0;
	else if (a==1)
	ketqua=1;
	else
	{
		ketqua=1;
		for (int i=1;i<=a;i++)
		{
			ketqua*=i;
		}
	}
 return ketqua;
 }
 int max(int b ,int c, int d)
 {
 	int ketqua1;
 	ketqua1=b;
 	if(ketqua1<c)
 	ketqua1=c;
 	if(ketqua1<d)
 	ketqua1=d;
 	
return ketqua1;
 }
 void tamgiac(int n )
 {
 	int j,q,k;
 	for(int i=1;i<=n;i++)
 	{
 		for(int k=1;k<=n-i;k++)
 		printf(" ");
 		for( int q=1; q<=2*i;q++)
 		printf("*");
 		printf("\n");
 	}
 }
 int main()
 {
 	printf("giai thua cua 9 =%d",gt(9));
 	printf("\n gia tri lon nhat la %d",max(10,20,30));
 	printf("\n\n");
 	tamgiac(20);
 	
 }


