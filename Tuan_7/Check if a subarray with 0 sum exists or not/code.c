#include<stdio.h>

void nhap(int n, int a[])
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void in(int x,int y, int a[])
{
    for(int i=x; i<=y; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void find_subarray(int a[], int n)
{
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        int tong = 0;
        for(int j=i; j<n; j++)
        {
            tong += a[j];
            if(tong == 0)
            {
                in(i, j, a);
                count +=1;
            }
        }
    }
    if(count == 0)
    {
        printf("subarray not found");
    }
}

int main()
{
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    printf("nhap tung phan tu cho mang: ");
    nhap(n, a);
    find_subarray(a, n);
    return 0;
}