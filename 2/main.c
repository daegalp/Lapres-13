#include <stdio.h>
#include <stdlib.h>

void triangular();

int main()
{
    int n;
    puts("Menampilkan Bilangan Triangular\n");
    printf("Masukkan bilangan : ");
    scanf("%d", &n);
    triangular(n);
    return 0;
}

void triangular(int n, int i, int total)
{
    total=0;
    for(i=1; n>=i; n--)
    {
        printf("%d + ", n);
        total+=n;
    }
    printf("\b\b= %d", total);
}
