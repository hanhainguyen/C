#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[100],n;
	printf("nhap so ptu cua mang ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		printf (" nhap phan tu a[%d]",i);
		scanf("%d",&a[i]);
	}
	int sapxep;
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if(a[i]%2!=0)
			{
			sapxep=a[i];
			a[i]=a[j];
			sapxep=a[j];
			}
			
		}
	}
	printf(" day so vua sap xep la ");
	for (int i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
	

 return 0;
 }


