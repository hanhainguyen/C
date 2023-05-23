#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[10],sapxep;
	for(int i=0;i<10;i++)
	{
		printf("Nhap gia tri cho A[%d]=",i);
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < 10;i++)
	{
		for (int j=i+1;j<10;j++)
		{
			if (a[j]<a[i])
			{
				sapxep = a[i];
				a[i] = a[j];
				a[j] = sapxep;
			}
		}
		printf("\nmang o luot sap xep thu %d",i+1);

		for (int i = 0; i < 10;i++)
		{
			printf("%5d",a[i]);
		}
	}

 return 0;
 }


