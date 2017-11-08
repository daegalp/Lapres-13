#include <stdio.h>
#include <stdlib.h>

int hitungcn();
int hitungsn();
int main()
{
    int n, hasilcn=0, hasilsn=0;

    puts("Menampilkan Hasil Cn dan Sn\n");
    printf("Masukkan n : ");
    scanf("%d", &n);
    hasilcn=hitungcn(n);
    hasilsn=hitungsn(n);

    printf("Hasil dari Cn = 2(Cn-1) + 1 dengan n=%d adalah %d\n", n, hasilcn);
    printf("Hasil dari Sn = Sn-1 + n-1 dengan n=%d adalah %d\n", n, hasilsn);
    return 0;
}

int hitungcn(int n)
{
    int cn=1, i;
    for(i=1; i<=n; i++)
        cn = (2*cn) + 1;
    return cn;
}

int hitungsn(int n)
{
    int sn=0, i, z=0;
    for(i=1; i<=n; i++)
    {
        sn = sn + z;
        z++;
    }
    return sn;
}
