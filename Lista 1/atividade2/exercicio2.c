#include <stdio.h>
#include <stdlib.h>

/*Exercício 2 - Maior e menor elemento do array.
Escreva uma função que recebe um array de números inteiros e retorna o menor e o maior elemento do array.
Exemplo: menor_maior_array([5, 7, 9,6])
Saída: 5, 9 */
void menor_maior_array(int array[], int tamanho, int *menor, int *maior)
{
    if (tamanho == 0)
    {
        *menor = *maior = 0;
        return;
    }

    *menor = *maior = array[0];

    int i = 1;

    while (i < tamanho)
    {
        if (array[i] < *menor)
        {
            *menor = array[i];
        }
        if (array[i] > *maior)
        {
            *maior = array[i];
        }
        i++;
    }
}

int main()
{
    int vetores[] = {5, 7, 9, 6};
    int tamanho = sizeof(vetores) / sizeof(vetores[0]);
    int menor, maior;

    menor_maior_array(vetores, tamanho, &menor, &maior);
    printf("Saida: %d,%d\n", menor, maior);

    return 0;
}
