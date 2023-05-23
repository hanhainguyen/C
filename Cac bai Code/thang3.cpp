#include <stdio.h>

int main()
{
    int n;
    double a[20000];
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap cac so: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
    printf("Cac so da nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%lf ", a[i]);
    }

    double sum = a[0] + a[1] + a[2];
    int index;
    for (int i = 1; i < n; i++)
    {
        if(a[i] + a[i + 1] + a[i + 2] > sum) {
            sum = a[i] + a[i + 1] + a[i + 2];
            index = i;
        }
    }
    printf("\n3 so lien tiep co tong lon nhat la: %lf, %lf, %lf", a[index], a[index + 1], a[index + 2]);

    return 0;
}
