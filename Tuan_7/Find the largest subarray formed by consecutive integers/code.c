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
    int L = 0;
    int start = 0;
    for(int i=0; i<n; i++)
    {
        int min = a[i];
        int max = a[i];
        for(int j=i+1; j<n;j++)
        {
            int k;
            for( k = i; k < j; k++)
            {
                if(a[k] == a[j]) break;
            }
            if(k < j) break; 
            if(a[j] < min) min = a[j];
            if(a[j] > max) max = a[j]; 
            if(max - min == j - i)
            {
                if(j - i  > L)
                {
                    L = j - i ;
                    start = i;
                }
            }     
        }
    }
    if (L == 0)
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
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    printf("nhap tung phan tu cho mang: ");
    nhap(n, a);
    find_subarray(a, n);
    return 0;
}