#include "tabela_hash.h"
#include <stdio.h>

int main()
{
    // Inserindo alunos na tabela hash
    hash_table_put("Italo", "UC22102126");
    hash_table_put("Mirelle", "UC22101838");
    hash_table_put("Kaua", "UC22101679");

    // Recuperando a matrícula de um aluno
    printf("Matricula de Italo: %s\n", hash_table_get("Italo"));
    printf("Matricula de Kaua: %s\n", hash_table_get("Kaua"));
    printf("Matricula de Mirelle: %s\n\n", hash_table_get("Mirelle"));

    // Verificando se um aluno está na tabela hash
    printf("Kaua esta na tabela? %d\n", hash_table_contains("Kaua"));
    printf("Italo esta na tabela? %d\n", hash_table_contains("Italo"));
    printf("Mirelle esta na tabela? %d\n", hash_table_contains("Mirelle"));
    printf("Joel esta na tabela? %d\n\n", hash_table_contains("Joel"));

    // Removendo um aluno da tabela hash
    printf("Removendo Mirelle da tabela...\n");
    hash_table_remove("Mirelle");

    // Verificando se o aluno foi removido
    printf("Mirelle esta na tabela? %d\n\n", hash_table_contains("Mirelle"));

    // Usando a função hash para calcular o índice do array 
    printf("------------------CALCULANDO INDICE------------------\n");
    int hash1 = hash("Italo"); 
    hash_table_put("Italo", "UC22102126"); 
    printf("Hash de Italo: %d\n", hash1);

    int hash2 = hash("Mirelle"); 
    hash_table_put("Mirelle", "UC22101838"); 
    printf("Hash de Mirelle: %d\n", hash2);

    int hash3 = hash("Kaua");
    hash_table_put("Kaua", "UC22101679");
    printf("Hash de Kaua: %d\n", hash3); 
}
