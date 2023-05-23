#include<stdio.h>



int main()
{
int a[10000];
int n;
printf("Moi ban nhap vao so phan tu: ");
scanf("%d",&n);


for (int i = 0; i < n;i++)
	{
		printf("Nhap vao phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}

//In ra phan thu 2 trong mang
	printf("Phan tu thu 2 cua mang la: %d",a[1]);

//Dem so phan tu co gia tri bang 5
int d = 0;
for (int i = 0; i < n;i++)
{
if (a[i]==5)
d++;
}
printf("\nSo phan tu co gia tri bang 5 la: %d",d);

//In ra gia tri lon nhat trong mang
int max = a[0];
for (int i = 0; i < n;i++)
{
if (a[i]>max)
max = a[i];
}
printf("\nPhan tu lon nhat trong mang la: %d",max);

//Tinh tong cua mang
int Tong = 0;
for (int i = 0; i < n;i++)
{
Tong = Tong + a[i];
}
printf("\nTong cua mang la: %d",Tong);

//Sap xep phan tu theo thu tu tang dan
int sapxep;
for (int i = 0; i < n;i++)
{
	for (int j=i+1;j<n;j++)
	{
		if (a[j]<a[i])
		{
			sapxep = a[i];
			a[i] = a[j];
			a[j] = sapxep;
		}
	}
}
printf("\nDay so minh vua sap xep la:" );
for (int i = 0; i < n;i++)
	{
		printf("\n%d",a[i]);
	}




return 0;

}
