#include<stdio.h>
#include<math.h>
#include<string.h>
#define dau_cham '.'
#include<conio.h>
int main()
{
   float epsilon;
   do
   {
   	printf("nhap epsilon: ");
   	scanf("%f",&epsilon);
   	}while (epsilon <0);
   	int i=0;
   	float s=0, gg=0;
   
   	do 
   	{
   		gg = 1.0 / (2*i+1);
   		s = s + pow(-1,i)*gg;
   		printf("\tg = %f,\t s= %f\n", gg,s);
   		i++;
   		
   	}
   	  while (gg >= epsilon);
   	  printf("\npi/4 bang: %f pi=%f",s,4*s);
    
 
 }


