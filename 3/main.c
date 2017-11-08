#include <stdio.h>
#include <stdlib.h>

float kuadrat(float);
int main()
{
    float bil, hasil;
    puts("Menampilkan Nilai Kuadrat dari Angka yang Diinput\n");
    printf("Masukkan angka : ");
    scanf("%f", &bil);
    hasil=kuadrat(bil);
    printf("Nilai kuadrat dari %g = %g", bil, hasil);
    return 0;
}
float kuadrat(float x)
{
    float hasil;
    hasil=x*x;
    return hasil;
}
