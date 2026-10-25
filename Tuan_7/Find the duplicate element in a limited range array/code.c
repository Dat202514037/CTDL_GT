#include<stdio.h>

void nhap(int n, int a[])
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}


void find(int a[], int n)
{
    int count =0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(a[i] == a[j])
            {
                printf("The duplicate element is: %d\n", a[i]);
                count+=1;
            }
        }
    }
    if(count == 0) printf("No duplicate elements found");
}

int main()
{
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    printf("nhap tung phan tu cho mang: ");
    nhap(n, a);
    find(a, n);
    return 0;
}
