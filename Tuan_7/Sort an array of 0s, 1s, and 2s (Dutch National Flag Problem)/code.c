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

void sort(int a[], int n)
{
    int first = 0, mid = 0, last = n - 1 ;
    while(mid <= last)
    {
        if(a[mid] == 0) swap(&a[mid], &a[first]), mid++, first++ ;
        else if(a[mid] == 1) mid++;
        else swap(&a[mid], &a[last]), last-- ;
    }
    in(n, a);
}

int main()
{
    int a[] = { 2, 1, 2, 1, 2, 1 };
    int n = sizeof(a)/sizeof(a[0]);
    sort(a, n);
}