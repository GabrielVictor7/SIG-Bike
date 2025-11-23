#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/vendas.h"
#include "../include/tela_inicial.h"
#include "../include/relatorios.h"
#include "../include/bicicletas.h"
#define ARQ_BICICLETAS "dados/bicicletas.dat"
#define ARQ_VENDAS "dados/vendas.dat"

void modulo_relatorios(void) {
    char opcao;
    do {
        opcao = menu_relatorio();
        switch (opcao) {
            case '1': modulo_relatorios_clientes(); break;
            case '2': modulo_relatorios_funcionarios(); break;
            case '3': modulo_relatorios_vendas(); break;
            case '4': modulo_relatorios_bicicletas(); break;
        
            case '0': return; 
            default:
                printf("Opção inválida!\n");
                Enter();
        }
    } while (opcao != '0');
}

char menu_relatorio(void) {
    char op;
    system("clear||cls");
    printf("╔═══════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                Módulo Relatório                               ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                           1. Relatorio de clientes                            ║\n");
    printf("║                           2. Relatorio de funcionarios                        ║\n");
    printf("║                           3. Relatorio de Vendas                              ║\n");
    printf("║                           4. Relatorio de bicicletas                          ║\n");
    printf("║                                                                               ║\n");
    printf("║                           0. Voltar ao menu anterior                          ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
    printf("Digite a opção desejada: ");
    scanf(" %c", &op);
    getchar();
    return op;
}


// == TELA RELATORIO DE CLIENTES == //
void modulo_relatorios_clientes(void) {
    char opcao;
    do {
        opcao = tela_relatorio_clientes();
        switch (opcao) {

            case '1': relatorio_de_cliente_ativo(); break;
            case '2': relatorio_de_cliente_inativo(); break;

            case '0': return; 
            default:
                printf("Opção inválida!\n");
                Enter();
        }
    } while (opcao != '0');
}


char tela_relatorio_clientes(void) {
    char op;
    system("clear||cls");
    printf("╔═══════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                             Módulo Relatório Clientes                         ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                           1. Relatorio Clientes ativo                         ║\n");
    printf("║                           2. Relatorio Clientes inativos                      ║\n");
    printf("║                                                                               ║\n");
    printf("║                           0. Voltar                                           ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
    printf("Digite a opção desejada: ");
    scanf(" %c", &op);
    getchar();
    return op;
    
}


// == TELA RELATORIO DE FUNCIONARIOS == //
void modulo_relatorios_funcionarios(void) {
    char opcao;
    do {
        opcao = tela_relatorio_funcionarios();
        switch (opcao) {

            case '1': relatorio_de_funcionario_ativo(); break;
            case '2': relatorio_de_funcionario_inativo(); break;

            case '0': return; 
            default:
                printf("Opção inválida!\n");
                Enter();
        }
    } while (opcao != '0');
}


char tela_relatorio_funcionarios(void) {
    char op;
    system("clear||cls");
    printf("╔═══════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                             Módulo Relatório funcionarios                     ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                           1. Relatorio funcionarios ativo                     ║\n");
    printf("║                           2. Relatorio funcionarios inativos                  ║\n");
    printf("║                                                                               ║\n");
    printf("║                           0. Voltar                                           ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
    printf("Digite a opção desejada: ");
    scanf(" %c", &op);
    getchar();
    return op;
    
}


// == TELA RELATORIO DE VENDAS == //
void modulo_relatorios_vendas(void) {
    char opcao;
    do {
        opcao = tela_relatorio_vendas();
        switch (opcao) {

            case '1': relatorio_vendas(); break;
            case '2': relatorio_vendas_ativas(); break;
            case '3': relatorio_vendas_inativas(); break;

            case '0': return; 
            default:
                printf("Opção inválida!\n");
                Enter();
        }
    } while (opcao != '0');
}


char tela_relatorio_vendas(void) {
    char op;
    system("clear||cls");
    printf("╔═══════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                             Módulo Relatório Vendas                           ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                           1. Relatorio geral de vendas                        ║\n");
    printf("║                           2. Relatorio vendas ativos                          ║\n");
    printf("║                           3. Relatorio vendas inativos                        ║\n");
    printf("║                                                                               ║\n");
    printf("║                           0. Voltar                                           ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
    printf("Digite a opção desejada: ");
    scanf(" %c", &op);
    getchar();
    return op;
    
}


// == TELA RELATORIO DE BICICLETAS == //
void modulo_relatorios_bicicletas(void) {
    char opcao;
    do {
        opcao = tela_relatorio_bicicletas();
        switch (opcao) {

            case '1': relatorio_bicicletas(); break;
            case '2': relatorio_bicicletas_ativas(); break;
            case '3': relatorio_bicicletas_inativas(); break;

            case '0': return; 
            default:
                printf("Opção inválida!\n");
                Enter();
        }
    } while (opcao != '0');
}


char tela_relatorio_bicicletas(void) {
    char op;
    system("clear||cls");
    printf("╔═══════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                             Módulo Relatório bicicletas                       ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                           1. Relatorio geral de bicicletas                    ║\n");
    printf("║                           2. Relatorio bicicletas ativos                      ║\n");
    printf("║                           3. Relatorio bicicletas inativos                    ║\n");
    printf("║                                                                               ║\n");
    printf("║                           0. Voltar                                           ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
    printf("Digite a opção desejada: ");
    scanf(" %c", &op);
    getchar();
    return op;
    
}

//════════════════════════════════════════════════ RELATORIO DE CLIENTES ATIVOS ════════════════════════════════════════════════



void relatorio_de_cliente_ativo(void) {
    FILE *fp = fopen(ARQ_CLIENTES, "rb");
    
    // ve se tem cliente cadastrado
    if (!fp) {
        system("clear||cls");
        printf("--- Relatório de Clientes ---\n");
        printf("Nenhum cliente cadastrado ainda.\n");
        Enter(); 
        return;
    }

    Cliente clien; // struct
    int clientes_encontrados = 0;  

    system("clear||cls");
    
    // Configurações da largura das colunas
    // usa as constantes do arquivo .h                           
    const int NOME_W = 20;
    const int CPF_W = 15;
    const int EMAIL_W = 30;
    const int CIDADE_W = 15;
    
    printf("╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                           Relatório Clientes Ativos                                  ║\n");
    printf("╠═══════╦═══════════════════════╦═════════════════╦═══════════════════════════════════╦════════════════╣\n");
    printf("║Status ║ %-*s  ║ %-*s ║ %-*s    ║%-*s ║\n", 
           NOME_W, "Nome", CPF_W, "CPF", EMAIL_W, "Email", CIDADE_W, "Cidade");
    printf("╠═══════╬═══════════════════════╬═════════════════╬═══════════════════════════════════╬════════════════╣\n");

    // 2. Leitura dos registros e exibição
    while (fread(&clien, sizeof(Cliente), 1, fp)) {
        if (clien.status == 'A') {
            printf("║   %c   ║ %-*.*s  ║ %-*.*s ║ %-*.*s    ║%-*.*s ║\n",
                   clien.status,
                   NOME_W, NOME_W, clien.nome,
                   CPF_W, CPF_W, clien.cpf,
                   EMAIL_W, EMAIL_W, clien.email,
                   CIDADE_W, CIDADE_W, clien.cidade);
            clientes_encontrados++;
        }
    }
    // A parte da exibição das constantes foi criada com o ajuda do gemini
    
    
    fclose(fp);

    printf("╚═══════╩═══════════════════════╩═════════════════╩═══════════════════════════════════╩════════════════╝\n");
    // vai exibir essa mensagem se nenhum cliente estiver ativo
    if (clientes_encontrados == 0) {
        printf("\nNenhum cliente ativo encontrado.\n");
    } else {
        printf("\nTotal de clientes ativos listados: %d\n", clientes_encontrados);
    }
    // exibe essa mensagem junto da tela de relatóeio com o número de clientes ativos
    
    printf("\nENTER para continuar");
    getchar();
}



//════════════════════════════════════════════════ RELATORIO DE CLIENTES INATIVOS ════════════════════════════════════════════════



void relatorio_de_cliente_inativo(void) {
    FILE *fp = fopen(ARQ_CLIENTES, "rb");
    
    // ve se tem cliente cadastrado
    if (!fp) {
        system("clear||cls");
        printf("--- Relatório de Clientes ---\n");
        printf("Nenhum cliente cadastrado ainda.\n");
        Enter(); 
        return;
    }

    Cliente clien; // struct
    int clientes_encontrados = 0;  

    system("clear||cls");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n"); 
    printf("════════════════════════════════════            Relatório Clientes Inativos           ════════════════════════════════════\n");
    printf("%-7s | %-30s | %-15s | %-40s | %-20s\n", 
           "Status", "Nome", "CPF", "Email", "Cidade");
           
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n"); 

    while (fread(&clien, sizeof(Cliente), 1, fp)) {
        if (clien.status == 'I') {
            printf("%-7c | %-30s | %-15s | %-40s | %-20s\n",
                   clien.status,
                   clien.nome,    
                   clien.cpf,     
                   clien.email,   
                   clien.cidade); 
            clientes_encontrados++;
        }
    }
    
    fclose(fp);

    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n");

    if (clientes_encontrados == 0) {
        printf("\nNenhum cliente inativo encontrado.\n");
    } else {
        printf("\nTotal de clientes inativos listados: %d\n", clientes_encontrados);
    }
    
    printf("\nENTER para continuar");
    getchar(); 
}



//════════════════════════════════════════════════ RELATORIO DE FUNCIONARIOS ATIVOS ════════════════════════════════════════════════



void relatorio_de_funcionario_ativo(void) {
    FILE *fp = fopen(ARQ_FUNCIONARIOS, "rb");
    
    // ve se tem Funcionário cadastrado
    if (!fp) {
        system("clear||cls");
        printf("--- Relatório de Funcionários ---\n");
        printf("Nenhum Funcionário cadastrado ainda.\n");
        Enter(); 
        return;
    }

    Funcionario func; // struct
    int funcionarios_encontrados = 0;  

    system("clear||cls");
    
    // Configurações da largura das colunas
    // usa as constantes do arquivo .h                           
    const int NOME_W = 20;
    const int CPF_W = 15;
    const int EMAIL_W = 30;
    const int CARGO_W = 15;
    
    printf("╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                        Relatório Funcionário Ativos                                  ║\n");
    printf("╠═══════╦═══════════════════════╦═════════════════╦═══════════════════════════════════╦════════════════╣\n");
    printf("║Status ║ %-*s  ║ %-*s ║ %-*s    ║%-*s ║\n", 
           NOME_W, "Nome", CPF_W, "CPF", EMAIL_W, "Email", CARGO_W, "Cargo");
    printf("╠═══════╬═══════════════════════╬═════════════════╬═══════════════════════════════════╬════════════════╣\n");

    // 2. Leitura dos registros e exibição
    while (fread(&func, sizeof(Funcionario), 1, fp)) {
        if (func.status == 'A') {
            printf("║   %c   ║ %-*.*s  ║ %-*.*s ║ %-*.*s    ║%-*.*s ║\n",
                   func.status,
                   NOME_W, NOME_W, func.nome,
                   CPF_W, CPF_W, func.cpf,
                   EMAIL_W, EMAIL_W, func.email,
                   CARGO_W, CARGO_W, func.cargo);
            funcionarios_encontrados++;
        }
    }
    // A parte da exibição das constantes foi criada com o ajuda do gemini
    
    
    fclose(fp);

    printf("╚═══════╩═══════════════════════╩═════════════════╩═══════════════════════════════════╩════════════════╝\n");
    // vai exibir essa mensagem se nenhum cliente estiver ativo
    if (funcionarios_encontrados == 0) {
        printf("\nNenhum funcionário ativo encontrado.\n");
    } else {
        printf("\nTotal de funcionário ativos listados: %d\n", funcionarios_encontrados);
    }
    // exibe essa mensagem junto da tela de relatóeio com o número de clientes ativos
    
    printf("\nENTER para continuar");
    getchar();
}


//════════════════════════════════════════════════ RELATORIO DE FUNCIONARIOS INATIVOS ════════════════════════════════════════════════



void relatorio_de_funcionario_inativo(void) {

    // essa função foi totalmente reutilizada da anterior
    // já que segue a mesma ordem de filtro, a diferença so ocorre no while que testa se esta ativo ou inativo.


    FILE *fp = fopen(ARQ_FUNCIONARIOS, "rb");
    
    // ve se tem funcionário cadastrado
    if (!fp) {
        system("clear||cls");
        printf("--- Relatório de Funcionários ---\n");
        printf("Nenhum funcionário cadastrado ainda.\n");
        Enter(); 
        return;
    }

    Funcionario func; // struct
    int funcionarios_encontrados = 0;  

    system("clear||cls");
    
    // usa as constantes do arquivo .h  
    
    // essa parte da exibição foi feita com ajuda do gemini, essas constantes definem o tamanho do que vai ser exibido
    // de acordo com o arquivo .h
    const int NOME_W = 20;
    const int CPF_W = 15;
    const int EMAIL_W = 30;
    const int CARGO_W = 15;
    
    printf("╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                        Relatório Clientes inativos                                   ║\n");
    printf("╠═══════╦═══════════════════════╦═════════════════╦═══════════════════════════════════╦════════════════╣\n");
    printf("║Status ║ %-*s  ║ %-*s ║ %-*s    ║%-*s ║\n", NOME_W, "Nome", CPF_W, "CPF", EMAIL_W, "Email", CARGO_W, "Cargo");
    printf("╠═══════╬═══════════════════════╬═════════════════╬═══════════════════════════════════╬════════════════╣\n");

    // essa parte roda o teste, se o funcionário estiver inativo, ele será exibido nessa tela
    while (fread(&func, sizeof(Funcionario), 1, fp)) {
        if (func.status == 'I') {
            printf("║   %c   ║ %-*.*s  ║ %-*.*s ║ %-*.*s    ║%-*.*s ║\n",
                   func.status,
                   NOME_W, NOME_W, func.nome,
                   CPF_W, CPF_W, func.cpf,
                   EMAIL_W, EMAIL_W, func.email,
                   CARGO_W, CARGO_W, func.cargo);
            funcionarios_encontrados++;
        }
    }
    // A parte da exibição das constantes foi criada com o ajuda do gemini
    
    
    fclose(fp);

    printf("╚═══════╩═══════════════════════╩═════════════════╩═══════════════════════════════════╩════════════════╝\n");
    // vai exibir essa mensagem se nenhum funcionário estiver inativo
    if (funcionarios_encontrados == 0) {
        printf("\nNenhum funcionário inativo foi encontrado.\n");
    } else {
        printf("\nTotal de clientes inativos listados: %d\n", funcionarios_encontrados);
    }
    
    printf("\nENTER para continuar");
    getchar();
}



//════════════════════════════════════════════════ RELATORIO DE VENDAS ════════════════════════════════════════════════


void relatorio_vendas(void) {

    FILE *arq = fopen(ARQ_VENDAS, "rb");
    if (!arq) {
        system("cls||clear");
        printf("--- Relatório de Vendas ---\n");
        printf("Nenhuma venda cadastrada ainda.\n");
        Enter();
        return;
    }

    Venda v;
    int total = 0, ativas = 0, inativas = 0;
    int total_itens_vendidos = 0;
    float faturamento_total = 0.0;

    
    char melhor_cliente[20] = "";
    char melhor_funcionario[20] = "";
    int compras_cliente_max = 0;
    int vendas_func_max = 0;

    
    Venda lista[MAX_VENDAS];
    int qtd_vendas = 0;

    while (fread(&v, sizeof(Venda), 1, arq) == 1) {
        lista[qtd_vendas++] = v;
    }
    fclose(arq);

    system("cls||clear");
    printf("\n");
    printf("       ╔══════════════════════════════════════════════════════════════════╗\n");
    printf("       ║                        RELATÓRIO DE VENDAS                       ║\n");
    printf("       ╚══════════════════════════════════════════════════════════════════╝\n\n");

    printf("╔══════╦═════════╦════════════════╦════════════════╦════════════╦══════════════╗\n");
    printf("║ ID   ║ Status  ║ CPF Cliente    ║ CPF Funcionário║ Quantidade ║ Valor Total  ║\n");
    printf("╠══════╬═════════╬════════════════╬════════════════╬════════════╬══════════════╣\n");

  
    for (int i = 0; i < qtd_vendas; i++) {
        v = lista[i];

        printf("║ %-4d ║    %c    ║ %-14s ║ %-14s ║ %-10d ║ R$ %8.2f  ║\n",
               v.id,
               v.status,
               v.cpf_cliente,
               v.cpf_funcionario,
               v.quantidade,
               v.valor_total);

        total++;

      
    }

    printf("╚══════╩═════════╩════════════════╩════════════════╩════════════╩══════════════╝\n");

    
    for (int i = 0; i < qtd_vendas; i++) {
        if (lista[i].status == 'I') continue;

        int count = 0;
        for (int j = 0; j < qtd_vendas; j++) {
            if (lista[j].status == 'A' &&
                strcmp(lista[j].cpf_cliente, lista[i].cpf_cliente) == 0)
                count++;
        }

        if (count > compras_cliente_max) {
            compras_cliente_max = count;
            strcpy(melhor_cliente, lista[i].cpf_cliente);
        }
    }

  
    for (int i = 0; i < qtd_vendas; i++) {
        if (lista[i].status == 'I') continue;

        int count = 0;
        for (int j = 0; j < qtd_vendas; j++) {
            if (lista[j].status == 'A' &&
                strcmp(lista[j].cpf_funcionario, lista[i].cpf_funcionario) == 0)
                count++;
        }

        if (count > vendas_func_max) {
            vendas_func_max = count;
            strcpy(melhor_funcionario, lista[i].cpf_funcionario);
        }
    }



    printf("\nResumo Geral:\n");
    printf("═══════════════════════════════════════════════════════════════\n");
    printf("Total de vendas cadastradas: %d\n", total);
    printf("  Ativas:   %d\n", ativas);
    printf("  Inativas: %d\n\n", inativas);

    printf("Itens vendidos (somente ativas): %d unidades\n", total_itens_vendidos);
    printf("Faturamento total: R$ %.2f\n\n", faturamento_total);

    if (ativas > 0)
        printf("Ticket médio: R$ %.2f\n\n", faturamento_total / ativas);

    printf("Destaques:\n");


    if (compras_cliente_max > 0)
        printf("Cliente que mais comprou: %s  (%d compras)\n",
               melhor_cliente, compras_cliente_max);

    if (vendas_func_max > 0)
        printf("Funcionário que mais vendeu: %s  (%d vendas)\n",
               melhor_funcionario, vendas_func_max);

    printf("\n═══════════════════════════════════════════════════════════════\n");
    Enter();
}


//════════════════════════════════════════════════ RELATORIO DE VENDAS ATIVAS ════════════════════════════════════════════════


void relatorio_vendas_ativas(void) {

    FILE *arq = fopen(ARQ_VENDAS, "rb");
    if (!arq) {
        system("cls||clear");
        printf("--- Relatório de Vendas ---\n");
        printf("Nenhuma venda cadastrada ainda.\n");
        Enter();
        return;
    }

    Venda v;



    Venda lista[MAX_VENDAS];
    int qtd_vendas = 0;

    while (fread(&v, sizeof(Venda), 1, arq) == 1) {
        lista[qtd_vendas++] = v;
    }
    fclose(arq);

    system("cls||clear");
    
    printf("\n");
    printf("       ╔══════════════════════════════════════════════════════════════════╗\n");
    printf("       ║                        RELATÓRIO DE VENDAS                       ║\n");
    printf("       ╚══════════════════════════════════════════════════════════════════╝\n\n");

    printf("╔══════╦═════════╦════════════════╦════════════════╦════════════╦══════════════╗\n");
    printf("║ ID   ║ Status  ║ CPF Cliente    ║ CPF Funcionário║ Quantidade ║ Valor Total  ║\n");
    printf("╠══════╬═════════╬════════════════╬════════════════╬════════════╬══════════════╣\n");

    
    for (int i = 0; i < qtd_vendas; i++) {
        if (lista[i].status == 'I') {
            printf("║ %-4d ║    %c    ║ %-14s ║ %-14s ║ %-10d ║ R$ %8.2f  ║\n",
                lista[i].id,
                lista[i].status,
                lista[i].cpf_cliente,
                lista[i].cpf_funcionario,
                lista[i].quantidade,
                lista[i].valor_total);
        }
    }


    printf("╚══════╩═════════╩════════════════╩════════════════╩════════════╩══════════════╝\n");
    Enter();

}



//════════════════════════════════════════════════ RELATORIO DE VENDAS INATIVAS ════════════════════════════════════════════════


void relatorio_vendas_inativas(void) {

    FILE *arq = fopen(ARQ_VENDAS, "rb");
    if (!arq) {
        system("cls||clear");
        printf("--- Relatório de Vendas ---\n");
        printf("Nenhuma venda cadastrada ainda.\n");
        Enter();
        return;
    }

    Venda v;



    Venda lista[MAX_VENDAS];
    int qtd_vendas = 0;

    while (fread(&v, sizeof(Venda), 1, arq) == 1) {
        lista[qtd_vendas++] = v;
    }
    fclose(arq);

    system("cls||clear");
    
    printf("\n");
    printf("       ╔══════════════════════════════════════════════════════════════════╗\n");
    printf("       ║                        RELATÓRIO DE VENDAS                       ║\n");
    printf("       ╚══════════════════════════════════════════════════════════════════╝\n\n");

    printf("╔══════╦═════════╦════════════════╦════════════════╦════════════╦══════════════╗\n");
    printf("║ ID   ║ Status  ║ CPF Cliente    ║ CPF Funcionário║ Quantidade ║ Valor Total  ║\n");
    printf("╠══════╬═════════╬════════════════╬════════════════╬════════════╬══════════════╣\n");

    //fiz um ajuste nessa parte com a ajuda do deepseek pq ele ta exibindo os dados invertidos
     for (int i = 0; i < qtd_vendas; i++) {
        if (lista[i].status == 'I') {
            printf("║ %-4d ║    %c    ║ %-14s ║ %-14s ║ %-10d ║ R$ %8.2f  ║\n",
                lista[i].id,
                lista[i].status,
                lista[i].cpf_cliente,
                lista[i].cpf_funcionario,
                lista[i].quantidade,
                lista[i].valor_total);
        }
    }
    //
    printf("╚══════╩═════════╩════════════════╩════════════════╩════════════╩══════════════╝\n");
    Enter();

}



//════════════════════════════════════════════════ RELATORIO DE BICICLETAS ════════════════════════════════════════════════



void relatorio_bicicletas(void) {
     // 1. ABRE o arquivo de bicicletas
    // 2. MONTA o cabeçalho da tabela
    // 3. PERCORRE cada bicicleta lendo do arquivo
    // 4. IMPRIME cada bike em uma linha da tabela
    // 5. CALCULA estatísticas durante a leitura
    // 6. FECHA o arquivo
    // 7. EXIBE o resumo final
    FILE *arq = fopen(ARQ_BICICLETAS, "rb");
    if (!arq) {
        system("cls||clear");
        printf("--- Relatório de Bicicletas ---\n");
        printf("Nenhuma bicicleta cadastrada ainda.\n");
        Enter();
        return;
    }

    
    Bicicleta b;
    int total = 0, ativas = 0, inativas = 0;
    int estoque_total = 0;
    float valor_total_estoque = 0.0;

    Bicicleta mais_cara, mais_barata;
    int primeira = 1;

    system("cls||clear");
    printf("\n");
    printf("              ╔══════════════════════════════════════════════════════════════════╗\n");
    printf("              ║                     RELATÓRIO DE BICICLETAS                      ║\n");
    printf("              ╚══════════════════════════════════════════════════════════════════╝\n\n");


    //
    printf("╔══════╦═════════╦═══════════════════╦═══════════════════╦══════════════╦════════════╦══════════════╗\n");
    printf("║ ID   ║ Status  ║ Marca             ║ Modelo            ║ Preço        ║ Estoque    ║ ID Interno   ║\n");
    printf("╠══════╬═════════╬═══════════════════╬═══════════════════╬══════════════╬════════════╬══════════════╣\n");

    // (Essa organização da tabela eu fiz com ajuda do deepseek pq ela tava sempre saindo mt bugada
    while (fread(&b, sizeof(Bicicleta), 1, arq) == 1) {
        printf("║ %-4d ║    %c    ║ %-17.17s ║ %-17.17s ║ R$ %8.2f  ║ %-10d ║ %-11d  ║\n",
            // d = inteiro
            // c = um caracter
            // -4 = 4 caracteres alinhados a esquerda, tipo id:1  aí é 1+3
               b.id,
            // b.id é a mesma coisa que endereço_do_id = endereço_de_b + 142(byte suposto onde ele começa)
               b.status,
               b.marca,
               b.modelo,
               b.preco,
               b.estoque,
               b.id);

        total++;
     // deepseek )



        if (b.status == 'A') {
            ativas++;
            estoque_total += b.estoque;
            valor_total_estoque += b.preco * b.estoque;
        } else {
            inativas++;
        }

        
        // Inicializa mais cara / barata
        if (primeira) {
            mais_cara = b;
            mais_barata = b;
            primeira = 0;
        } else {
            if (b.preco > mais_cara.preco) mais_cara = b;
            if (b.preco < mais_barata.preco) mais_barata = b;
        }
    }

    fclose(arq);

    printf("╚══════╩═════════╩═══════════════════╩═══════════════════╩══════════════╩════════════╩══════════════╝\n");

    // Resto do código (estatísticas)
    printf("\nResumo Geral:\n");
    printf("═══════════════════════════════════════════════════════════════\n");
    printf("Total de bicicletas cadastradas: %d\n", total);
    printf("  Ativas:   %d\n", ativas);
    printf("  Inativas: %d\n\n", inativas);

    printf("Estoque total (somente ativas): %d unidades\n", estoque_total);
    printf("Valor total estimado do estoque: R$ %.2f\n\n", valor_total_estoque);

    printf("Bicicleta mais cara:\n");
    printf("  ID: %d | Marca: %s | Modelo: %s | Preço: R$ %.2f\n\n",
           mais_cara.id, mais_cara.marca, mais_cara.modelo, mais_cara.preco);

    printf("Bicicleta mais barata:\n");
    printf("  ID: %d | Marca: %s | Modelo: %s | Preço: R$ %.2f\n\n",
           mais_barata.id, mais_barata.marca, mais_barata.modelo, mais_barata.preco);

    printf("═══════════════════════════════════════════════════════════════\n");
    Enter();


}


//════════════════════════════════════════════════ RELATORIO DE BICICLETAS ATIVAS ════════════════════════════════════════════════



void relatorio_bicicletas_ativas(void) {
     // 1. ABRE o arquivo de bicicletas
    // 2. MONTA o cabeçalho da tabela
    // 3. PERCORRE cada bicicleta lendo do arquivo
    // 4. IMPRIME cada bike em uma linha da tabela
    // 5. CALCULA estatísticas durante a leitura
    // 6. FECHA o arquivo
    // 7. EXIBE o resumo final
    FILE *arq = fopen(ARQ_BICICLETAS, "rb");
    if (!arq) {
        system("cls||clear");
        printf("--- Relatório de Bicicletas ---\n");
        printf("Nenhuma bicicleta cadastrada ainda.\n");
        Enter();
        return;
    }

    
    Bicicleta b;
 

    system("cls||clear");
    printf("\n");
    printf("              ╔══════════════════════════════════════════════════════════════════╗\n");
    printf("              ║                     RELATÓRIO DE BICICLETAS ATIVAS               ║\n");
    printf("              ╚══════════════════════════════════════════════════════════════════╝\n\n");


    //
    printf("╔══════╦═════════╦═══════════════════╦═══════════════════╦══════════════╦════════════╦══════════════╗\n");
    printf("║ ID   ║ Status  ║ Marca             ║ Modelo            ║ Preço        ║ Estoque    ║ ID Interno   ║\n");
    printf("╠══════╬═════════╬═══════════════════╬═══════════════════╬══════════════╬════════════╬══════════════╣\n");

    // (Essa organização da tabela eu fiz com ajuda do deepseek pq ela tava sempre saindo mt bugada
    while (fread(&b, sizeof(Bicicleta), 1, arq) == 1) {
        if (b.status == 'A'){
            printf("║ %-4d ║    %c    ║ %-17.17s ║ %-17.17s ║ R$ %8.2f  ║ %-10d ║ %-11d  ║\n",
            // d = inteiro
            // c = um caracter
            // -4 = 4 caracteres alinhados a esquerda, tipo id:1  aí é 1+3
               b.id,  
            // b.id é a mesma coisa que endereço_do_id = endereço_de_b + 142(byte suposto onde ele começa)
               b.status,
               b.marca,
               b.modelo,
               b.preco,
               b.estoque,
               b.id) ;
        }
             }
            
                

     // deepseek )


    fclose(arq);

    printf("╚══════╩═════════╩═══════════════════╩═══════════════════╩══════════════╩════════════╩══════════════╝\n");

 
    Enter();


}


//════════════════════════════════════════════════ RELATORIO DE BICICLETAS INATIVAS ════════════════════════════════════════════════


void relatorio_bicicletas_inativas(void) {
     // 1. ABRE o arquivo de bicicletas
    // 2. MONTA o cabeçalho da tabela
    // 3. PERCORRE cada bicicleta lendo do arquivo
    // 4. IMPRIME cada bike em uma linha da tabela
    // 5. CALCULA estatísticas durante a leitura
    // 6. FECHA o arquivo
    // 7. EXIBE o resumo final
    FILE *arq = fopen(ARQ_BICICLETAS, "rb");
    if (!arq) {
        system("cls||clear");
        printf("--- Relatório de Bicicletas ---\n");
        printf("Nenhuma bicicleta cadastrada ainda.\n");
        Enter();
        return;
    }

    
    Bicicleta b;
 

    system("cls||clear");
    printf("\n");
    printf("              ╔══════════════════════════════════════════════════════════════════╗\n");
    printf("              ║                   RELATÓRIO DE BICICLETAS INATIVAS               ║\n");
    printf("              ╚══════════════════════════════════════════════════════════════════╝\n\n");


    //
    printf("╔══════╦═════════╦═══════════════════╦═══════════════════╦══════════════╦════════════╦══════════════╗\n");
    printf("║ ID   ║ Status  ║ Marca             ║ Modelo            ║ Preço        ║ Estoque    ║ ID Interno   ║\n");
    printf("╠══════╬═════════╬═══════════════════╬═══════════════════╬══════════════╬════════════╬══════════════╣\n");

    // (Essa organização da tabela eu fiz com ajuda do deepseek pq ela tava sempre saindo mt bugada
    while (fread(&b, sizeof(Bicicleta), 1, arq) == 1) {
        if (b.status == 'I'){
            printf("║ %-4d ║    %c    ║ %-17.17s ║ %-17.17s ║ R$ %8.2f  ║ %-10d ║ %-11d  ║\n",
            // d = inteiro
            // c = um caracter
            // -4 = 4 caracteres alinhados a esquerda, tipo id:1  aí é 1+3
               b.id,  
            // b.id é a mesma coisa que endereço_do_id = endereço_de_b + 142(byte suposto onde ele começa)
               b.status,
               b.marca,
               b.modelo,
               b.preco,
               b.estoque,
               b.id) ;
        }
             }
            
                

     // deepseek )


    fclose(arq);

    printf("╚══════╩═════════╩═══════════════════╩═══════════════════╩══════════════╩════════════╩══════════════╝\n");

 
    Enter();


}