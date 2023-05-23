#include<stdio.h>



typedef struct Player
{
char name[100];
float ser,bl,spi,ser2,bl2,spi2;
};



int main()
{
Player a[1000];
int n;
scanf("%d",&n);
for (int i=1;i<=n;i++)
{
fflush(stdin);
gets(a[i].name);
scanf("%f%f%f",&a[i].ser,&a[i].bl,&a[i].spi);
scanf("%f%f%f",&a[i].ser2,&a[i].bl2,&a[i].spi2);
}
double S11 = 0;
double S12 = 0;
double S21 = 0;
double S22 = 0;
double S31 = 0;
double S32 = 0;
for (int i=1;i<=n;i++)
{
S11 += a[i].ser; // Tong cu service
S12 += a[i].ser2; // So cu service thanh cong
S21 += a[i].bl; // Tong cu Block
S22 += a[i].bl2; // So cu Block thanh cong
S31 += a[i].spi; // Tong cu spike
S32 += a[i].spi2; // So cu spike thanh cong
}
printf("\nService: %0.2lf %%",(S12/S11)*100);
printf("\nBlock: %0.2lf %%",(S22/S21)*100);
printf("\nSpike: %0.2lf %%",(S32/S31)*100);

}
