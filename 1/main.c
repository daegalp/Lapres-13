#include <stdio.h>
#include <stdlib.h>

void menu(void);

int main()
{
    int i, angka;
    puts("Menampilan Fungsi Menu Sejumlah Angka yang Diinput\n");
    printf("Masukkan angka : ");
    scanf("%d", &angka);
    puts("");
    for(i=1;i<=angka;i++)
        menu();
    return 0;
}
void menu(void)
{
    puts("Pilihan Menu : ");
    printf("1. Ayam Bakar\n");
    printf("2. Ayam Goreng\n\n");
}
