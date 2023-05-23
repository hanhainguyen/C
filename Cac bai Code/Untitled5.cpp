#include<stdio.h>
#include<math.h>

int main()
{
	int a[10000];
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int d=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		d++;
	}
	printf("%d Multiplo(s) de 2\n",d);
	int x=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]%3==0)
		x++;
	}
	printf("%d Multiplo(s) de 3\n",x);
	int m=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]%4==0)
		m++;
	}
	printf("%d Multiplo(s) de 4\n",m);
	int t=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]%5==0)
		t++;
	}
	printf("%d Multiplo(s) de 5",t);
	
 return 0;
 }

