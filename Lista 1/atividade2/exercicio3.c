#include <stdio.h>
#include <stdlib.h>
/*Exercício 3 - Verificar se um elemento existe no array Escreva uma função que recebe um array de strings e uma string de busca,
 e retorna "1" se a string de busca existe no array, ou "0" caso não exista.*/

int elementoExisteNoArray(const char *array[], int tamanhoArray, const char *elementoProcurado)
{
    for (int i = 0; i < tamanhoArray; i++)
    {
        if (strcmp(array[i], elementoProcurado) == 0)
        {
            return 1; // Elemento encontrado
        }
    }
    return 0; // Elemento não encontrado
}

int main()
{
    const char *array[] = {"texto", "J", "EDA"};
    const char *elementoProcurado = "EDO";
    int tamanhoArray = sizeof(array) / sizeof(array[0]);

    if (elementoExisteNoArray(array, tamanhoArray, elementoProcurado))
    {
        printf("O elemento %s foi encontrado no array.\n", elementoProcurado);
    }
    else
    {
        printf("O elemento %s não foi encontrado no array.\n", elementoProcurado);
    }

    return 0;
}