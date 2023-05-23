#include<stdio.h>
#include<math.h>
#include<string.h>



typedef struct sinhvien{
float MSV;
char name[100];
float diem;
char truong;
};



main(){
int n, i;
sinhvien sv[100];
printf("Moi nhap so sinh vien: ");
scanf("%d", &n);
printf("\n\n");
for(i=1;i<=n;i++)
{
printf("Nhap vao MSV thu %d: ",i);
scanf("%f",&sv[i].MSV);
printf("Nhap vao ho ten sinh vien thu %d: ",i);
fflush(stdin);
gets(sv[i].name);
printf("Nhap vao diem trung binh sinh vien thu %d: ",i);
scanf("%f",&sv[i].diem);
printf("Nhap vao truong cua sinh vien thu %d: ",i);
fflush(stdin);
scanf("%c",&sv[i].truong);
printf("\n ");
}
printf("\n Cac sinh vien vua nhap vao la:");
printf("\n ");
for(i=1;i<=n;i++)
{
printf("\nMSV sinh vien thu %d: %f ",i,sv[i].MSV);
printf("\nHo va ten sinh vien thu %d: %s ",i,sv[i].name);
printf("\nDiem trung binh sinh vien thu %d: %f ",i,sv[i].diem);
printf("\nTruong cua sinh vien thu %d: %c ",i,sv[i].truong);
printf("\n\n ");
}

//Tim cac sinh vien co diem cao nhat
float max = sv[1].diem;
for (i=1;i<=n;i++)
{
if (sv[i].diem>max)
max = sv[i].diem;
}
printf("\n ");
printf("\nNhung sinh vien co diem cao nhat la: ");
for (i=1;i<=n;i++)
{
if(sv[i].diem == max)
printf("%3s",sv[i].name);
}

//Sap xep thi sinh theo diem tang dan
float temp;
for (i=1;i<n;i++)
{
for (int j=i+1;j<=n;j++)
{
if (sv[i].diem > sv[j].diem)
{
  temp = sv[i].diem;
  sv[i].diem = sv[j].diem;
  sv[j].diem = temp;
}
}
}
printf("\n ");
printf("\nCac ban co diem tang dan la: ");
for (i=1;i<=n;i++)
{
printf("%3s",sv[i].name);
}
}

