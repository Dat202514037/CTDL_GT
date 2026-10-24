#include<stdio.h>

void nhap(int *n, int a[])
{
    for(int i=0; i<*n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void in(int *n, int a[])
{
    for(int i=0; i<*n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void swap(int *a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int a[], int l, int r, int n)
{
    if(l < r)
    {
        int pivot = a[l];
        int i = l;
        int j = r;
        while(i < j)   
        {
            do
            {
                i++;
            } while (a[i] < pivot);
            do
            {
                j--;
            } while (a[j] > pivot);
            if( i >= j) break;
            swap(&a[i], &a[j]);            
        }
        swap(&a[l], &a[j]);
        in(&n, a);
        sort(a, l, j, n);
        sort(a, j+1, r , n);
    }
}
int main()
{
    int n;
    printf("Nhap so phan tu cua mang:");
    scanf("%d", &n);
    int a[n];
    printf("\nNhap tung phan tu cho mang:");
    nhap(&n, a);
    printf("\nMang sau tung lan sap xep:\n");
    sort(a, 0, n, n);
}