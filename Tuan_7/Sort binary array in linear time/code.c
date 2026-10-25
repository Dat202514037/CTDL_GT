#include<stdio.h>

void in(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}


void sort(int a[], int n)
{
    int k=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 0)
        {
            a[k] = 0;
            k++;
        }
    }
    for(int j=k; j<n; j++)
    {
        a[j] = 1;
    }
}

int main()
{
    int a[] = { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0 };
    int n = sizeof(a)/sizeof(a[0]);
    sort(a, n);
    in(a, n);
}