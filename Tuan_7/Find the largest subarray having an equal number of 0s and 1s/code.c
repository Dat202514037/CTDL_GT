#include<stdio.h>

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
    int len = 0;
    int start = 0;
    for(int i = 0; i<n; i++)
    {
        int tong = 0;
        for(int j=i; j<n; j++)
        {
            if(a[j] == 0) tong += -1;
            if(a[j] == 1) tong += 1;
            if(tong == 0)
            {
                if(j - i > len)
                {
                    len = j -i;
                    start = i;
                }
            }
        }
    }
    in(start, start + len, a);
}

int main()
{
    int a[] = { 1, 1, 0, 0, 1, 1 };
    int n = sizeof(a)/sizeof(a[0]);
    find_subarray(a, n);
    return 0;
}