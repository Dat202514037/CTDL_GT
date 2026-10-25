#include<stdio.h>

void in(int n, int a[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_1(int n, int a[])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j]) swap(&a[i], &a[j]);
        }
    }
}


void sort_2(int a[],int b[], int n, int m)
{
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(b[i] < a[j]) swap(&b[i], &a[j]);
        }
    }
    sort_1(m, b);
}

int main()
{
    int a[] = { 1, 4, 7, 8, 10 };
    int b[] = { 2, 3, 9 };
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    sort_2(a, b, n, m);
    in(n, a);
    in(m, b);
}