#include<stdio.h>
int main()
{
 int a[100];
 int n;
 printf("nhap so gia tri n :");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
 	printf("nhap gia tri thu a[%d] :",i+1);
 	scanf("%d",&a[i]);
}
    for(int i=0;i<n;i++)
    printf("a[%d] :%d",i+1,a[i]);
}

