#include<stdio.h>
#include<math.h>
#include<string.h>
float dt( float r)
{
	return r*r*3,14;
	
}
float cv(float r)
{
	return 2*r*3,14;
}
int main()
{
	float r;
	printf("Nhap ban kinh duong tron:");
	scanf("%f",&r);
	printf("Chu vi duong tron la : %f",cv(r));
	printf("\nDien tich duong tron la : %.2f",dt(r));

 return 0;
 }

