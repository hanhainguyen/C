#include<stdio.h>
#include<math.h>

int main()
{
 int a,b,c; 
 scanf("%d",&a);
 if(a%2==0)
 {
 	c=a+1;
 	printf("%d\n",c);
 	for (b=1;b<6;b++)
 	{
 		c=c+2;
 		printf("%d\n",c);
 		
	 }
 }
 if(a%2>0)
 {
 	c=a;
 	printf("%d\n",a);
 	for (b=1;b<6;b++)
 	{
 		c=c+2;
 		printf("%d\n",c);
	 }
 }

 return 0;
 }

