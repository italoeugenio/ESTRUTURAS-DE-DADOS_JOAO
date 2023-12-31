#include <stdio.h>
#include <stdlib.h>

/* Exercício 4 - Contar a quantidade de ocorrências de um elemento no array. Escreva uma função que recebe um array de números inteiros e um número inteiro de busca, e retorna a quantidade de vezes que o número de busca aparece no array.
Exemplo: conta_int_array([5, 7, 9, 6, 7, 11, 6, 5], 7)
Saída: 2 */

int conta_int_array(int array[], int tamanho, int numero_busca)
{
    int contador = 0;
    int i = 0;

    while (i < tamanho)
    {
        if (array[i] == numero_busca)
        {
            contador++;
        }
        i++;
    }

    return contador;
}

int main(){
    int meu_array[] = {5,7,9,6,7,11,6,5};
    int tamanho_meu_array = sizeof(meu_array) / sizeof(meu_array[0]);
    int meu_numero_busca = 7;

    int quantidade_ocorrencias = conta_int_array(meu_array, tamanho_meu_array, meu_numero_busca);
    printf("Saida: %d\n", quantidade_ocorrencias);

    return 0;
}
