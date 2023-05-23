#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nnhap phan tu a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	printf("\nphan tu mang truoc khi xoa la; ");
	for(int i=0;i<n;i++)
	{
		printf("%d   ",a[i]);
		
	}
	int j,k;;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		
			j=i;
			for(j;j<n-1;j++)
			{
		
				a[j]=a[j+1];
			}
			n--;
		}
	}
	printf("\n mang sau khi xoa cac ptu chan la;");
	for(int i=0;i<n;i++)
	{
		printf("%d   ",a[i]);
	}
	int g,h;
	printf("\nnhap vi  tri can chen ");
	scanf("%d",&g);
	printf("\nnhap gia tri can chen ");
	scanf("%d",&h);
	if(g<n)
	{
	
		for(int i=n-1;i>=g;i--)
		{
			a[i+1]=a[i];
			a[g]=h;
		
		}
			n++;
	}
	printf("noi dung cua mang; \n");
	for(int i=0;i<n;i++)
	{
		printf(" %5d",a[i]);
	}


 return 0;
 }


