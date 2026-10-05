#include<stdio.h>

void chuyen_dia(int n, char cot_A, char cot_B, char cot_C)
{
    if(n == 1)
    {
        printf("Chuyen dia %d tu cot %c sang cot %c\n", n, cot_A, cot_B);
    }
    else
    {
        chuyen_dia(n-1, cot_A, cot_C, cot_B);
        printf("chuyen dia %d tu cot %c sang cot %c\n", n, cot_A, cot_B);
        chuyen_dia(n - 1, cot_C, cot_B, cot_A);
    }
};

int main()
{
    int n;
    char A, B, C;
    printf("nhap so luong dia:");
    scanf("%d", &n);
    chuyen_dia(n, 'A', 'B', 'C');
    
}

