#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	float x[100], y[100];
	int n,i,j;
	printf("Nhap so diem: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Nhap hoanh do diem thu %d: ",i+1);
		scanf("%f",&x[i]);
		printf("Nhap tung do diem thu %d: ",i+1);
		scanf("%f",&y[i]);		
	}
	for(i=0;i<n;i++)
	 printf("(%f, %f) ",x[i],y[i]);
	 
  	int dem=0;
	for(i=0;i<n;i++)
	{
		if(x[i]<0&&y[i]<0)
		 dem++;
	} 
	
	printf("\nCo %d diem thuoc goc phan tu thu 3", dem);
	
	
	
	float max=sqrt(x[0]*x[0]+y[0]*y[0]);
	int vitri=0;
	for(i=1;i<n;i++)
	{
		float kc=sqrt(x[i]*x[i]+y[i]*y[i]);
		if(kc>max)
		 {
		 	max=kc;
		 	vitri=i;
		 }
	}
	printf("\nDiem cach goc toa do xa nhat la: (%f, %f)",x[vitri],y[vitri]);
	
	
	int dem1=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(y[i]*y[j]<=0)
			 {
			 	dem1++;
			 }
		}
	}
	printf("\nCo %d doan thang cat truc hoanh", dem1);
	
	return 0;
}


