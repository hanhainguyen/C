#include<stdio.h>
#include<math.h>
#include<string.h>
void odd(int);
void neg(int);
int inum;
int main(void )
{
	printf("nhap vao 1 so nguyen ");
	scanf("%d",&inum);
	odd(inum);
	neg(inum);
}
void odd(int inum)
{
	if(inum%2)
		printf("%ed la so le ",inum);
	else 
		printf("\n%d la so chan",inum);
}
void neg(int inum)
{
	if(inum<0)
		printf("\nla so am ",inum);
	else 
		printf("\nla so duong",inum);
}
