#include<stdio.h>
#include<math.h>
#include<string.h>
void nhapmang(int[],int);
void xuatmang(int[],int);
int demsolan(int[],int);

int main()
{
	int a[20];
	int n,x;
	printf("Nhap so phan tu ");
	scanf("%d",&n);
	printf("Nhap gia tri cua X ");
	scanf("%d",&x);
	if(n>=5)
	{
		nhapmang(a,n);
		printf("\nMang vua nhap la ");
		xuatmang(a,n);
		printf("\nSo lan xuat hien cua %d la %d",x,demsolan(a,n));
	}
	else
	printf("Nhap sai so phan tu ");
 }
 void nhapmang(int[],int)
 {
 	for(int i=0;i<=n;i++)
 	{
 		printf("A[%d]= ",i);
 		scanf("%d",&a[i]);
 	}
 }
 void xuatmang(int[],int)
 {
 	for(int i=0;i<n;i++)
 	{
 		printf("%5d",a[i]);
 	}
 }
 int demsolan(int[],int)
 {
 	int dem=0;
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]==x)
 		dem++;
 	}
 }

