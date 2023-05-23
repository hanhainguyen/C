#include<stdio.h>
#include<math.h>
#include<string.h>
void nhapmang(int [],int);
void xuatmang(int [],int);
int solonnhat(int[],int);
void sapxep(int[],int);
void timkiem(int[],int);

int main()
{
	int a[20];
	int n;
	printf("nhap so phan tu ");
	scanf("%d",&n);
	nhapmang(a,n);
	printf("\nMang vua nhap la\n ");
	xuatmang(a,n);
	printf("\nSo lon nhat trong mang la %d ",solonnhat(a,n));
	sapxep(a,n);
	printf("\nMang sau khi sap xep\n ");
	xuatmang(a,n);

 }
 void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
} 
void xuatmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
}

int solonnhat(int a[],int n)
{
	int max;
	max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[0])
		max=a[i];
	}
	return max; 
}
void sapxep(int a[],int n)
{
	int t;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
			 	t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
}





