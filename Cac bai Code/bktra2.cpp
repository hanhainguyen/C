#include <stdio.h>
#include <string.h>
typedef struct mathang{
	int ma, soluong;
	char ten[30];
	long dongia;
};
int main()
{
	mathang a[100];
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	for (int i = 0; i<n;i++)
	{
		printf("Nhap ma: "); scanf("%d", &a[i].ma);
		printf("Nhap ten mat hang: ");
		fflush(stdin);
		gets(a[i].ten);
		printf("Nhap so luong: "); scanf("%d", &a[i].soluong);
		printf("Nhap don gia: "); scanf("%ld", &a[i].dongia);
	}
	printf("\nMa\tTenmathang\tSoluong\tDongia\n");
	for (int i = 0; i<n;i++)
	{
		printf("%d", a[i].ma);
		printf("\t%s", a[i].ten);
		printf("\t\t%d", a[i].soluong);
		printf("\t%ld\n", a[i].dongia);
	}
	printf("----------------------------\n");
	mathang temp;
	for (int i =0; i<n-1;i++)
	{
		for (int j = i+1; j<n; j++)
		{
			if (a[j].dongia<a[i].dongia)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Ds update theo gia tang dan:\n");
	printf("\nMa\tTenmathang\tSoluong\tDongia\n");
	for (int i = 0; i<n;i++)
	{
		printf("%d", a[i].ma);
		printf("\t%s", a[i].ten);
		printf("\t\t%d", a[i].soluong);
		printf("\t%ld\n", a[i].dongia);
	}
}
