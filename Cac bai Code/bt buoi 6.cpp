#include<stdio.h>
#include<math.h>
int main()
{
int n, a[10000];
printf("Nhap vao so phan tu: ");
scanf("%d",&n);
for (int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

//Tinh tong cac phan tu duong
int Tong=0;
for (int i=0;i<n;i++)
{
if (a[i]>0)
Tong = Tong + a[i];
}
printf("\nTong cac phan tu duong la: %d",Tong);

//Tich phan tu khac 0
int Tich = 1;
for (int i=0;i<n;i++)
{
if (a[i]!=0)
Tich = Tich * a[i];
}
printf("\nTich cac phan tu khac 0 la: %d",Tich);

int Tong2=0;
for (int i=0;i<n;i++)
{
if (a[i]>-5 && a[i]<7)
Tong2 = Tong2 + a[i];
}
printf("\nTong cac phan tu trong khoang (-5;7) la: %d",Tong2);

//Tinh trung binh nhan
float TBN = 1;
float dem = 0;
for (int i=0;i<n;i++)
{
if (a[i]%2!=0)
{
dem++;
TBN = TBN * a[i];
}
}
float c = 1/dem;
printf("\nTBN cac phan tu le la: %f",pow(TBN,c));

//Tich hai so lien tiep be nhat
int min = a[0]*a[1];
int h,k;
for (int i=0;i<n-1;i++)
{
if (a[i]*a[i+1]<min)
{
min = a[i]*a[i+1];
h = i;
k=i+1;
}
}
printf ("\nHai so lien tiep co tich be nhat la: %d va %d",a[h],a[k]);
}
