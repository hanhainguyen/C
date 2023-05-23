#include<stdio.h>
#define password 1234567 
int main()
{
	int pass;
	int y =0;
	while (y==0)
	{
		printf("hay nhap mat khau:");
		scanf("%d",&pass);
		if(pass == password)
		y =1;
		else 
		printf(" nhap sai mat khau\n");
	}
	printf("mo khoa\n");

 return 0;
 }


