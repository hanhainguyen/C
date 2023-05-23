#include<stdio.h>
#include<math.h>
#include<string.h>
void nhapmang(int [],int);
void xuatmang(int [],int);
int demsolan(int[],int);


int main()
{
	int a[20];
	int n;
	printf("Nhap so phan tu = ");
	scanf("%d",&n);
	if(n>=5)	
	{
	nhapmang(a,n);
	printf("\nMang vua nhap la\n ");
	xuatmang(a,n);
	printf("\nSo lan X xuat hien trong mang la %d ",demsolan(a,n));
	}
	else
	printf("Nhap sai so phan tu ");
	
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

int demsolan(int a[],int n)
{
	int x;
	printf("\nNhap gia tri cua X= ");
	scanf("%d",&x);
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		dem++;
	}
	return dem;
}
