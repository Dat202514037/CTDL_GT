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

void find_subarray(int a[], int n, int sum)
{
    int L = 0;
    int start = 0;
    for(int i = 0; i<n; i++)
    {
        int tong = 0;
        for(int j=i; j<n; j++)
        {
            tong += a[j];
            if(tong == sum)
            {
                if(j - i > L)
                {
                    L = j - i;
                    start = i;
                }
            }
        }
    }
    if(L == 0)
    {
        printf("subarray not found\n");
    }
    else
    {
        in(start, start + L, a);
    }
}

int main()
{
    int n, sum;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    printf("nhap tung phan tu cho mang: ");
    nhap(n, a);
    printf("nhap tong: ");
    scanf("%d", &sum);
    find_subarray(a, n, sum);
    return 0;
}