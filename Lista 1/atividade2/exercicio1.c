#include <stdio.h>
#include <stdlib.h>
/*Exercício 1 - Soma dos elementos de um array.
Escreva uma função que recebe um array de números inteiros e retorna a soma de todos os elementos;

Exemplo: soma_array([5, 7, 9,6])
Saída: 27 */
int SomaElementos(int array[], int tamanho)
{
    int soma = 0;
    int i = 0;
    while (i < tamanho)
    {
        soma += array[i];
        i++;
    }

    return soma;
}

int main(void)
{
    int numeros[] = {5, 7, 9, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int resultado = SomaElementos(numeros, tamanho);
    printf("A soma dos elementos do array e: %d\n", resultado);

    return 0;
}