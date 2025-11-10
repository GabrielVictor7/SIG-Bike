#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../include/tela_inicial.h"
#include "../include/relatorios.h"





char menu_relatorio(void) {
	char op;
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                             Menu Relatório                            ///\n");
    printf("///                                                                       ///\n");                                                               
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           1. Relatório Clientes                                       ///\n");
	printf("///           2. Relatório Funcionários                                   ///\n");
	printf("///           3. Relatório De Bicicletas                                  ///\n");
	printf("///           4. Relatório de Vendas                                      ///\n");
	printf("///           5. Voltar a tela anterior                                   ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("Escolha uma opção: ");
	scanf("%c", &op);
	getchar();
	return op;
}