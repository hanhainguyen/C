#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a[5],k,chiso[100],dem=0;
	printf("Nhap gia tri k=");
	scanf("%d",&k);
	for(int i=1;i<=5;i++)
	{
		printf("Nhap gia tri cho A[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=5;i++)
	{
		if(a[i]==k)
		{
			chiso[dem]=i;
			dem++;
		}
	
	}
	if(dem>0)
	{
		printf("trong mang co phan tu %d co gia tri bang %d\n ",dem,k);
		for(int i=0;i<dem;i++)
		{
			printf("\n%3d\n",chiso[i]);
		}
	}
	else 
	printf("trong mang khong co gia tri bang k\n");
	int tong=0,tich=1,tongchan=0,tongle=0;
	for(int i=1;i<=5;i++)
	{
		tong+=a[i];
	}
	printf("tong cac phan tu la %d\n",tong);
	for(int i=1;i<=5;i++)
	{
		tich*=a[i];
	}
	printf("tich cac phan tu la %d\n",tich);
	for(int i=1; i<=5;i++)
	{
		if(a[i]%2==0)
		tongchan=tongchan+a[i];
	}
	printf("tong chan cua cac phan tu la %d\n",tongchan);
	for(int i=1; i<=5;i++)
	{
		if(a[i]%2!=0)
		tongle=tongle+a[i];
	}
	printf("tong le cua cac phan tu la %d\n",tongle);
	int s=0,dem8=0;
	float tbc;
	for(int i=1;i<=5;i++)
	{
		if(a[i]>0)
		s=s+a[i];
		dem8++;
	}
	tbc=s/dem8;
	printf("trung binh cong cua cac phan tu la %f\n",tbc);
	// dem cac so le va chan
	int c1=0,c2=0;
	for(int i=1;i<=5;i++)
	{
	if (a[i]%2==0)
	c1++;
	else 
	c2++;
	}
	printf("tong so phan tu chan la %d\n",c1);
	printf("tong so phan tu le la %d\n",c2);
	// xoa phan tu khoi mang
	int k1;  
	printf("nhap vi tri can xoa ");
	scanf("%d",k1);
	if(k1<k-1)
	for (int i=k1;i<k-1;i++)
	{
		a[i]=a[i+1];
		k--;
	}
	printf("noi dung cua mang \n");
	for(int i=1;i<=k;i++)
	{
		printf("%5d",a[i]);
	}
	
	
	
	
	
	
	

 return 0;
 }


