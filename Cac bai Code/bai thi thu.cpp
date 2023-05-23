#include<stdio.h>
#include<math.h>
#include<string.h>

 typedef struct thisinh
{
  char ten[100];
  float msv;
  float diemtb;
  char truong; 
};


int main()
{
	thisinh a[100];
	int n;
	printf(" Moi ban nhap so sinh vien: ");
	scanf("%d",&n);
	for(int i=1; i<=n;i++)
	{
		// cau truc sinh vien 
		printf("Nhap ten sinh vien: %d",i);
		fflush(stdin);
		gets(a[i].ten);
		printf("Nhap ma sinh vien: %d",i);
		scanf("%0f",&a[i].msv);
		printf("Nhap diem trung binh: %d",i);
		scanf("%f",&a[i].diemtb);
		printf("Nhap ten truong: %d",i);
		fflush(stdin);
		scanf("%c",&a[i].truong);
	}
		// tat ca thi sinh co diem cao nhat 
	float max= a[0].diemtb;
    for(int i=1; i<=n;i++)
    {
    	if(a[i].diemtb > max)
    		max = a[i].diemtb;
	}
	printf("thi sinh co diem cao nhat la: ");
	for(int i=1; i<=n;i++)
    {
    	if(a[i].diemtb == max)
    	 printf("\n%s",a[i].ten);
	}
	// sap xep thi sinh co diem tang dan 
	thisinh temp;
	for(int i=1 ; i<=n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j].diemtb<a[i].diemtb)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=1 ; i<=n;i++)
	{
		printf("%5s ",&a[i].ten);
	}
	//tim thi sinh truong b co diem lon hon 5
	int dem=0; 
	for(int i=1 ; i<=n;i++)
	{
		if(a[i].truong=='B' && a[i].diemtb > 5)
		{
			printf("%s",&a[i].ten);
			dem++;
		}
	}
	for(int i=1 ; i<n;i++)
	{
		if(dem==0)
		printf("khong co truong hop nao ");
	}
	// tim kiem thong tin sinh vien
	char b[100];
	printf("Moi ban nhap ten thi sinh: ");
	fflush(stdin);
	gets(b); 
	for(int i=1 ; i<=n;i++)
	{
		if(strcmp(b,a[i].ten)==0)
		{
			printf("\n%s  \n%f \n%d  \n%c",&a[i].ten,a[i].diemtb,&a[i].msv,a[i].truong);
		}
	}
	// dem so sinh vien moi truong
	int demA=0,demB=0,demC=0;
	for(int i=1 ; i<=n;i++)
	{
		if(a[i].truong=='A')
		    demA++;
		else if (a[i].truong=='B')
		    demB++;
		else
		    demC++;
	}
	max=demA;
	char ss='A';
	if(demB>demA)
	ss='B';
	if(demC>demA)
	ss='C';
	printf("\nso thi sinh truong A la: %d",demA);
	printf("\nso thi sinh truong B la: %d",demB);
	printf("\nso thi sinh truong C la: %d",demC);
	printf("\ntruong co nhieu thi sinh nhat la: %c",ss);
// 	
	


 return 0;
 }

