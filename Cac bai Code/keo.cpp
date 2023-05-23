#include<stdio.h>
#include<math.h>

int main()
{ 
 int A,B,C;
 scanf("%d %d %d",&A,&B,&C );
 if (A!=B && B!=C && A!=C)
 {
 	printf("3");
 }
 else if (A==C && A==B && B==C)
 {
 	printf("1");
 }
  
 
 else
 {
 	printf("2");
 }
 
 return 0;
 }

