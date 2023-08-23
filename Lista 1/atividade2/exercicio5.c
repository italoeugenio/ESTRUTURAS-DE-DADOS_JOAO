#include <stdio.h>
#include <stdlib.h>
/*Multiplicar elementos de dois arrays.
Escreva uma função que recebe dois arrays de números inteiros com o mesmo tamanho e retorna um
novo array com os elementos resultantes da multiplicação dos elementos dos dois arrays.

Exemplo: multiplica_array([5, 7, 9, 6], [5, 7, 9,6])
Saída: [25, 49, 81, 36] */
void multiplica_array(int array1[], int array2[], int resultado[], int tamanho)
{
    int i = 0;
    while (i < tamanho)
    {
        resultado[i] = array1[i] * array2[i];
        i++;
    }
}

int main(){
    int array1[] = {5,7,9,6};
    int array2[] = {5,7,9,6};
    int tamanho = sizeof(array1) / sizeof(array1[0]);

    int resultado[tamanho];
    multiplica_array(array1, array2, resultado, tamanho);

    printf("Resultado: ");
    int i = 0;
    do
    {
        printf("%d ", resultado[i]);
        i++;
    } while (i < tamanho);
    printf("\n");

    return 0;
}
