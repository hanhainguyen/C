#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[100],k,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nNhap ptu mang a[%d]= ",i+1);
		scanf("%d",&a[i]);
		
	}
	printf("\nnhap vi tri can xoa");
	scanf("%d",&k);
	if(k<n)
	for(int i=k;i<n;i++)
	{
		a[i]=a[i+1];
		n--;
	}
	printf("\nnoi dung cua mang\n ");
	for(int i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	

 return 0;
 }



