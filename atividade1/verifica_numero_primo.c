#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Uso: %s <Digite algum numero>\n", argv[0]);
        return 1;
    }

    int numero = atoi(argv[1]);
    int Primo = 1;

    if (numero <= 1) {
        Primo = 0;
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                Primo = 0;
                break;
            }
        }
    }

    printf("%d\n", Primo);

    return 0;
}
//gcc -o verifica_numero_primo verifica_numero_primo.c
//./verifica_numero_primo 123456

