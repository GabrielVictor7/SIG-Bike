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
        printf("║                           2. Lista Geral de Bicicletas                        ║\n");
        printf("║                           3. Lista Geral de Patinetes                         ║\n");
        printf("║                           4. Bicicletas mais Alugadas                         ║\n");
        printf("║                           5. Patinetes mais Alugados                          ║\n");
        printf("║                                                                               ║\n");
        printf("║                           0. Voltar                                           ║\n");
        printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
        printf(" Digite a opção desejada: ");
        scanf("%d", &op);
        getchar();
}