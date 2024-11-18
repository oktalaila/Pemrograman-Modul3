#include <stdio.h>

int main() {
    int bil;
    scanf("%d", &bil);
    if (bil == 0) {
        printf("Nol\n");
    }
    else if (bil >= 1 & bil <10) {
        printf("Satuan");
    }
    else if (bil >=11 & bil < 20) {
        printf("Belasan");
    }
    else if (bil ==10 || bil >= 20 & bil <= 99) {
        printf("Puluhan");
    }
    else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
}