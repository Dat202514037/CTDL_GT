#include<stdio.h>

void nhap(int n, int a[])
{
    printf("nhap cac phan tu cho mang:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void in(int n, int a[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    printf("so luong phan tu cua mang la:");
    scanf("%d", &n);
    int a[n];
    nhap(n, a);
    for(int i = 1;i < n; i++)
    {
        int k = a[i];
        int j = i - 1;
        while(j >= 0 && k < a[j])
        {
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = k;
    
    printf("\nBuoc %d: ", i);
    in(n, a);
    }
}