#include<stdio.h>
#include<math.h>

int main()
{
	int a[1000],dem=0,i=1;
	do
	{
		scanf("%d",&a[i]);
		dem++;
	}
    while (a[i++]!=0);
    for (int i=1;i<=dem;i++)
    {
	
       for(int j=1;j<=a[i];j++)
       {
       	 printf("%3d",j);
	   }
	   printf("\n");
    }
    return 0; 
 }

