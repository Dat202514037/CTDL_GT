#include<stdio.h>

void chuyen_dia(int n, char cot_nguon, char cot_dich, char cot_tg)
{
    if(n == 1)
    {
        printf("Chuyen dia %d tu cot %c sang cot %c\n", n, cot_nguon, cot_dich);
    }
    else
    {
        chuyen_dia(n-1, cot_nguon, cot_tg, cot_dich);
        printf("chuyen dia %d tu cot %c sang cot %c\n", n, cot_nguon, cot_dich);
        chuyen_dia(n - 1, cot_tg, cot_dich, cot_nguon);
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

