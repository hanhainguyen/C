
#include<string.h>
#include<stdio.h>
#include <conio.h>
#include<math.h>
#include<stdlib.h>
#define max 100
int main()
{
    float a[max][max];// ma tran a
    float b[max];//ma tran b
    int m,n;
    printf("nhap m,n : ");
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)//hang
    {
        for(int j=0;j<n;j++)//cot
        {
            printf("nhap a[%d][%d] : ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" %f",a[i][j]);
        }
        printf("\n\n");
    }
    int max1=a[0][0];// cho mal = a[0][0]
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)// so sanh vs tung so
        {
            if(a[i][j]>max1)
            {
                max1=a[i][j];
            }
        }
    }
    for(int i=0;i<m;i++)// cot
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==max1)
            {
                printf("%d",j);
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        int tong=0;// khai bao
        for(int j=0;j<n;j++)
        {
            if(a[i][j]>0)// gia tri duong
            {
                tong+=a[i][j];
            }
        }
        b[i]=tong;// cho vao mang b
    }
    int maxl=b[0];
    for(int i=1;i<m;i++)
    {
        if(b[i]>maxl)
        {
            maxl=b[i];
        }
    }
    for(int i=0;i<m;i++)
    {
        if(b[i]==maxl)
        {
            printf("\n%d",i);
        }
    }
    float tich=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]>0)
            {
                tich=tich*a[i][j]*1.0;
            }
        }
    }
    printf("\n%f",tich);
    return 0;
}
 
