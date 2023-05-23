#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a%9==0)
	{
		printf("%d",a/9);
	}
    else 
    {
    	printf("%d",a/9+1);
	}
 return 0;
 }

