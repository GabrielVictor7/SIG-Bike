#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/tela_inicial.h"
#include "../include/relatorios.h"





char menu_relatorio(void) {
	char op;
	system("clear||cls");
        printf("╔═══════════════════════════════════════════════════════════════════════════════╗\n");
        printf("║                                Módulo Relatório                               ║\n");
        printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
        printf("║                           1. Lista Geral de Clientes                          ║\n");
        printf("║                           3. Lista Geral de Funcionários                      ║\n");
        printf("║                           2. Lista Geral de Bicicletas                        ║\n");
        printf("║                           4. Lista Geral de vendas                            ║\n");
        printf("║                           6. Voltar ao menu anterior                          ║\n");
        printf("║                                                                               ║\n");
        printf("║                                                                               ║\n");
        printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
        printf(" Digite a opção desejada: ");
        scanf("%d", &op);
        getchar();
}

void relatorio_funcionario(void){
    system("clear||cls");
    printf("╔════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                    Relatório Clientes                              ║\n");
    printf("╚════════════════════════════════════════════════════════════════════════════════════╝\n");
    printf("║       Nome        ║       CPF       ║           Email             ║      Fone      ║\n");
    printf("╚════════════════════════════════════════════════════════════════════════════════════╝\n");
    printf("ENTER para continuar");
    getchar();
}

