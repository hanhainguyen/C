#include<stdio.h>
#include<string.h>


typedef struct Sinhvien{
	int MSV;
	char name[100];
	float diem;
	char truong;
};

int main()
{
	Sinhvien sv[100];
	int n;
	printf("Nhap vao so sinh vien: ");
	scanf("%d",&n);
	printf("\n");
	for (int i=1;i<=n;i++)
	{	
		printf("Nhap vao MSV thu %d: ",i);
		scanf("%d",&sv[i].MSV);
		printf("Nhap vao ten sinh vien thu %d: ",i);
		fflush(stdin);
		gets(sv[i].name);
		printf("Nhap vao diem sinh vien thu %d: ",i);
		scanf("%f",&sv[i].diem);
		printf("Nhap vao truong sinh vien thu %d: ",i);
		fflush(stdin);
		scanf("%c",&sv[i].truong);
		printf("\n");
	}
	
	// Tat ca sinh vien co diem cao nhat
	printf("\n");
	printf("\nSinh vien co diem cao nhat la:");
	float max = 0;
	for (int i=1;i<=n;i++)
	{
		if (sv[i].diem > max)
			max = sv[i].diem;
	}
	for (int i=1;i<=n;i++)
	{
		if (sv[i].diem == max)
			printf("%5s",sv[i].name);
	}
	
	// Sap xep sinh vien theo thu tu diem tang dan
	printf("\n");
	printf("\nSap xep sinh vien theo muc diem tang dan: \n");
	Sinhvien Temp;
	for (int i=1;i<n;i++)
	{
		for (int j=i+1;j<=n;j++)
		{
			if (sv[j].diem < sv[i].diem)
			{
				Temp = sv[i];
				sv[i] = sv[j];
				sv[j] = Temp;
			}
		}
	}
	for (int i = 1;i<=n;i++)
	{
		printf("\n %s Diem: %f",sv[i].name,sv[i].diem);
		
	}
	
	//Tim cac thi sinh cua truong B co diem lon hon 5
	printf("\nCac thi sinh cua truong B co diem lon hon 5: ");
	int dem = 0;
	for (int i = 1;i<=n;i++)
	{
		if (sv[i].truong == 'B' && sv[i].diem > 5)
		{
			printf("%5s",sv[i].name);
			dem++;
		}		
	}
	if (dem==0)
		printf("\nKhong co sinh vien nao thuoc truong B thoa man !! ");
	
	
	// Tim kiem thong tin sinh vien
	printf("\nMoi ban nhap thong tin sinh vien can tim: ");
	char find[100];
	fflush(stdin);
	gets(find);
	for(int i=1;i<=n;i++)
	{
		if(strcmp(find,sv[i].name)==0)
		{
		
			printf("\nThong tin sinh vien ban can tim: ");
			printf("\nMSV: %d \nTen Sinh Vien: %s \nDiem Trung Binh: %f \nTruong: %c",sv[i].MSV,sv[i].name,sv[i].diem,sv[i].truong);
		}
	}
	
	// Dem so sinh vien moi truong
	int demA=0,demB=0,demC=0;
	for(int i=1;i<=n;i++)
	{
		if (sv[i].truong=='A')
			demA++;
		else if (sv[i].truong=='B')
			demB++;
		else 
			demC++;
	}
	max = demA;
	char school = 'A';
	if (demB > max)
		school = 'B';
	if (demC > max)
		school = 'C';
		
	printf("\nSo sinh vien truong A la: %d\n",demA);
	printf("\nSo sinh vien truong B la: %d\n",demB);
	printf("\nSo sinh vien truong C la: %d\n",demC);
	printf("\nTruong co dong sinh vien nhat la: %c\n",school);
	
	float bestB = 0;
	int Tg;
	for(int i=1;i<=n;i++)
	{
		if (sv[i].truong == 'B' && sv[i].diem > bestB )
		{
			bestB = sv[i].diem;
			Tg = i;
		}		
	}
	printf("\nSinh vien co diem cao nhat truong B la: ");
	printf("\nMSV: %d",sv[Tg].MSV);
	printf("\nTen Sinh Vien: %s",sv[Tg].name);
	printf("\nDiem: %f",sv[Tg].diem);
	
}

