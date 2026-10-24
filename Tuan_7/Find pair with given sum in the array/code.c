#include<stdio.h>

void nhap(int n, int a[])
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void find_pair(int a[], int n, int tong)
{
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] + a[j] == tong)
            {
                printf("Pair found (%d, %d)\n", a[i], a[j]);
                count += 1;
            }
        }
    }
    if(count == 0)
    {
        printf("pair not found");
    }
}

int main()
{
    int n, tong;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    printf("nhap tung phan tu cho mang: ");
    nhap(n, a);
    printf("tong = ");
    scanf("%d", &tong);
    find_pair(a, n, tong);
    return 0;
}
