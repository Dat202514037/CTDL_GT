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

void merge(int a[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int a1[n1];
    int a2[n2];
    int i, j, k;

    for (i = 0; i < n1; i++) 
    {
        a1[i] = a[l + i];
    }

    for (j = 0; j < n2; j++) 
    {
        a2[j] = a[m + 1 + j];
    }
    
    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
        {
            a[k] = a1[i];
            i++;
        }
        else
        {
            a[k] = a2[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = a1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = a2[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r, int *n) 
{
    if (l < r) 
    {
        int m = l + (r - l) / 2;
        mergeSort(a, l, m, n);
        mergeSort(a, m + 1, r, n);
        merge(a, l, m, r);
        in(n, a);
    }
}
int main() 
{
    int n;
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);
    int a[n];
    printf("\nNhap cac phan tu cua mang:");
    nhap(&n, a);
    printf("\nMang sau khi sap xep (Merge Sort):\n");
    mergeSort(a, 0, n - 1, &n);
}