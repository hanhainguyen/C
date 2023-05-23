#include<stdio.h>
#include<math.h>
#include<string.h>

 struct Thongtinsinhvien
{
	char Tensinhvien[50];
	int masinhvien;
	char Diachi[100];
	float Diemtrungbinh;
};

int main()
{
	Thongtinsinhvien sv1,sv2;
	printf("Nhap ten sinh vien 1:");
	fflush(stdin);
	gets(sv1.Tensinhvien);
	printf("Nhap ma sinh vien 1:");
	scanf("%d",&sv1.masinhvien);
	printf("Nhap dia chi sinh vien 1:");
	fflush(stdin);
	gets(sv1.Diachi);
	printf("Nhap diem trung binh sinh vien 1:");
	scanf("%f",&sv1.Diemtrungbinh);
	printf("Nhap ten sinh vien 2:");
	fflush(stdin);
	gets(sv2.Tensinhvien);
	printf("Nhap ma sinh vien 2:");
	scanf("%d",&sv2.masinhvien);
	printf("Nhap dia chi sinh vien 2:");
	fflush(stdin);
	gets(sv2.Diachi);
	printf("Nhap diem trung binh sinh vien 2:");
	scanf("%f",&sv2.Diemtrungbinh);
	printf("\nThong tin cua sinh vien ban vua nhap la:");
	printf("\nTen sinh vien la: %s",&sv1.Tensinhvien);
	printf("\nMa sinh vien la: %d",&sv1.masinhvien);
	printf("\nDia chi sinh vien la: %s",&sv1.Diachi);
	printf("\n\n");
	printf("\nTen sinh vien la: %s",&sv2.Tensinhvien);
	printf("\nMa sinh vien la: %d",&sv2.masinhvien);
	printf("\nDia chi sinh vien la: %s",&sv2.Diachi);
	if(sv1.Diemtrungbinh > sv2.Diemtrungbinh)
	{
		printf("\nSinh vien co diem tb cao la: %s",&sv1.Tensinhvien);
    }
	if(sv2.Diemtrungbinh > sv1.Diemtrungbinh)
	{
		printf("\nSinh vien co diem tb cao la: %s",&sv2.Tensinhvien);
	}
 return 0;
 }

