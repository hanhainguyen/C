#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[20];
	for(int i = 0; i<3 ;i++)
	
	{
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
	
    int n;
	
    for(int i=0;i<3;i++)
    
	{
    	n = a[0];
    	a[0]=a[2];
    	a[2]=n;
	}
    for(int i=0;i<3;i++)
    {
	    printf("%d\n",a[i]);
    } 
	

 return 0;
 }


