#include<stdio.h>
#include<math.h>

int main()
{
 int a, nam,thang,ngay;
 scanf("%d,&a");
 nam = a/365;
 int n;
 n= a%365;
 thang = n%30;
 ngay = n%30;
 printf("%d nam ", nam);
 printf("%d thang",thang);
 printf("%d ngay", ngay);
 return 0;
 }

