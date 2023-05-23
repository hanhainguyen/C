#include<stdio.h>
#include<math.h>

int main()
{ 
 int n,k;
 scanf("%d%d",&n,&k);
 printf("%d",k*pow(k-1,n-1));

 return 0;
 }

