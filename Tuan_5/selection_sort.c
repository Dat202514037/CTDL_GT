#include<stdio.h>

void nhap(int n, int a[])
{
    printf("\nnhap cac phan tu cho mang:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
        *a = *b;
        *b=temp;
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
    for(int i=0; i<n; i++)
    {
        int min = i;
        for(int j=i + 1; j<n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        swap(&a[i], &a[min]);
        printf("\nBuoc %d: ", i+1);
        in(n, a);
    }
}