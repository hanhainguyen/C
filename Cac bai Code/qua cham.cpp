#include<stdio.h>

int main()
{
  int n,cg;
  do{
    scanf("%d",&n);
    if(n<1 || n>100)
      printf("moi nhap lai!\n");
  }while(n<1 || n>100);
  cg=n-1;
  
  for(int i=0;i<=n-1;i++)
  {
    for(int j=0;j<=2*n-2;j++)
    {
      if(j==cg-i || j== cg+i) 
	  	printf("*");
      else 
	  	printf(" ");
    }
    printf("\n");
  }
  
  for(int i=n-2;i>=0;i--)  
  {                         
    for(int j=0;j<=2*n-2;j++)
    {
      if(j== cg-i || j== cg +i) 
	  	printf("*");
      else 
	  	printf(" ");
    }
    printf("\n");
  } 
}

