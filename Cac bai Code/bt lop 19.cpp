#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[100],n;
	printf("so phan tu mang ");
	scanf("%d",&n);
	for( int i=1;i<=n;i++)
	{
		printf("Nhap gia tri cua mang A[%d]",i);
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n;i++)
	{
		printf("%5d",a[i]);
	}
	int g,h;
	printf("\nnhap vi  tri can chen ");
	scanf("%d",&g);
	printf("\nnhap gia tri can chen ");
	scanf("%d",&h);
	if(g<n)
	{
	
		for(int i=n;i>=g;i--)
		{
			a[i+1]=a[i];
			a[g]=h;
		
		}
			n++;
	}
	printf("noi dung cua mang; \n");
	for(int i=1;i<=n;i++)
	{
		printf("\nA[%d]  %5d",i,a[i]);
	}


 return 0;
 }


