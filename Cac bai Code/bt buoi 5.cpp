#include<stdio.h>
#include<math.h>

int main()
{
	int a[20];
	for(int i = 0; i<20 ;i++)
	
	{
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
	
    int n,m;
	
    for(int i=0;i<20;i++)
    {
		{
    		n = a[0];
    		a[0]=a[19];
    		a[19]=n;
		}
	
		{
			m = a[1];
			a[1]=a[18];
			a[18]=m;
		}
    	for(int i=0;i<20;i++)
    		{
	    		printf("%d\n",a[i]);
    		} 
	}	
return 0;
 }

