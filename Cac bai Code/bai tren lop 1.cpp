#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
  	printf("\nso lon nhat la:%d",a);
  else if (b>a && b>c)
  	printf("\nso lon nhat la:%d",b);
  else
  	printf("\nso lon nhat la:%d",c);
  if(a<b && a<c)
  	printf("\nso nho nhat la:%d",a);
  else if (b<a && b<c)
  	printf("\nso nho nhat la:%d",b);  	
  else
    printf("\nso nho nhat la:%d",c);
 return 0;
 }


