#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Exercício 3 - Verificar se um elemento existe no array Escreva uma função que recebe um array de strings e uma string de busca,
 e retorna "1" se a string de busca existe no array, ou "0" caso não exista.*/

int busca_string(const char *array[], int tamanhoArray, const char *elementoProcurado)
{
    for (int i = 0; i < tamanhoArray; i++)
    {
        if (strcmp(array[i], elementoProcurado) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    const char *array[] = {"texto", "J", "EDA"};
    const char *elementoProcurado = "EDO"; //EDO
    int tamanhoArray = sizeof(array) / sizeof(array[0]);

    int resultado = busca_string(array, tamanhoArray, elementoProcurado);

    printf("%s\n", elementoProcurado);
    printf("%d\n", resultado);

    return 0;
}