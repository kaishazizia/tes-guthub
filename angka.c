#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    if (angka > 0) {
        printf("Angka %d adalah positif.\n", angka);
    } else if (angka < 0) {
        printf("Angka %d adalah negatif.\n", angka);
    } else {
        printf("Angka yang dimasukkan adalah nol.\n");
    }
    else {
        printf("Angka yang dimasukkan adalah nol.\n");
    }

    return 0;
}