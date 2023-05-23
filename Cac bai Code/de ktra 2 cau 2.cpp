#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct Sach{
	int masach;
	char tensach[100];
	char tacgia[100];
	float giatien;
};
int main()
{
	Sach S[100];
	int n;
	printf("So cuon sach la ");
	scanf("%d",&n);
	printf("\n");
	for(int i=1;i<=n;i++)
	{
		printf("Nhap ma sach %d la ",i);
		scanf("%d",&S[i].masach);
		printf("Nhap vao ten sach %d la ",i);
		fflush(stdin);
		gets(S[i].tensach);
		printf("Nhap vao ten tac gia cua sach %d la ",i);
		fflush(stdin);
		gets(S[i].tacgia);
		printf("Nhap gia tien cua sach %d la ",i);
		scanf("%f",&S[i].giatien);
		printf("\n");
	}
	// nhap vao ten tac gia va in ra nhung cuon sach cua tac gia do
	printf("Nhap ten tac gia la ");
	char B[100];
	fflush(stdin);
	gets(B);
	int dem=0;
	printf("\nTen nhung cuon sach cua tac gia %s la \n",B);
	for (int i=1;i<=n;i++)
	{
		if (strcmp(B,S[i].tacgia)==0 )
		{
			printf("%s",S[i].tensach);
			printf("\n");
			dem++;
		}
	}
	if(dem==0)
	printf("\nKhong co cuon sach nao ");
	// cuon sach dat nhat 
	float max=0;
	for (int i=1;i<=0;i++)
	{
		if(S[i].giatien>max)
		max= S[i].giatien;
		
	}
	for(int i=1;i<=n;i++)
	{
		if(S[i].giatien==max)
		printf("%3s",&S[i].tensach);
	}
	int dem1=0;
	for (int i=1;i<=n;i++)
	{
		if(S[i].giatien > 100)
		dem1++;
	}
	printf("\nCo %d cuon sach co gia lon hon 100",dem1);

 return 0;
 }


