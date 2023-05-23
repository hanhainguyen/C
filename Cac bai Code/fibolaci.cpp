#include<stdio.h>
#include<math.h>
#include<string.h>
int fibo(int k)
{
	if(k==0)
	return 0;
	if(k==1)
	return 1;
	return fibo(k-1)+ fibo(k-2);
}
int main()
{
	int i,n;
	printf("Nhap n :");
	scanf("%d",&n);
	printf("So fibolaci thu %d la: %d",n,fibo(n));
	printf("\nDay so fibolaci ");
	for( i=0; i<=n;i++)
	{
		printf("%5d",fibo(i));
	}
	
	return 0;
 }


