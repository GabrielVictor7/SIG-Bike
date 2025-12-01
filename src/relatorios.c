#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
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
            case '3': relat_clientes_ordem_alfabetica(); break;

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
    printf("║                           3. Relatorio Clientes em ordem alfabetica           ║\n");
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
            case '3': relat_funcionarios_ordem_alfabetica(); break;


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
    printf("║                           1. Relatorio Funcionarios ativo                     ║\n");
    printf("║                           2. Relatorio Funcionarios inativos                  ║\n");
    printf("║                           3. Relatorio Funcionarios Ordem Alfabática          ║\n");
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

    if (fp == NULL) {
        system("clear||cls");
        printf("--- Relatório de Clientes ---\n");
        printf("Erro na abertura dp arquivo\n");
        printf("Enter para voltar...\n");
        Enter();
        return;
    }

    Cliente *clientes = malloc(MAX_CLIENTES * sizeof(Cliente));

    int lidos = 0;
    while (lidos < MAX_CLIENTES &&
           fread(&clientes[lidos], sizeof(Cliente), 1, fp) == 1) {
        lidos++;
    }

    fclose(fp);

    system("clear||cls");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n"); 
    printf("════════════════════════════════════             Relatório Clientes Ativos            ════════════════════════════════════\n");
    printf("%-7s | %-30s | %-15s | %-40s | %-20s\n", 
           "Status", "Nome", "CPF", "Email", "Cidade");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n"); 

    int ativos = 0;

    for (int i = 0; i < lidos; i++) {
        if (clientes[i].status == 'A') {
            printf("%-7c | %-30s | %-15s | %-40s | %-20s\n",
                   clientes[i].status,
                   clientes[i].nome,
                   clientes[i].cpf,
                   clientes[i].email,
                   clientes[i].cidade);
            ativos++;
        }
    }

    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n");

    if (ativos == 0)
        printf("Nenhum cliente Ativo encontrado.\n");
    else
        printf("Total de clientes Ativos listados: %d\n", ativos);
    free(clientes);

    printf("ENTER para continuar");
    Enter();
}




//════════════════════════════════════════════════ RELATORIO DE CLIENTES INATIVOS ════════════════════════════════════════════════



void relatorio_de_cliente_inativo(void) {
    FILE *fp = fopen(ARQ_CLIENTES, "rb");

    if (fp == NULL) {
        system("clear||cls");
        printf("--- Relatório de Clientes ---\n");
        printf("Erro na abertura dp arquivo\n");
        printf("Enter para voltar...\n");
        Enter();
        return;
    }

    Cliente *clientes = malloc(MAX_CLIENTES * sizeof(Cliente));

    int lidos = 0;
    while (lidos < MAX_CLIENTES &&
           fread(&clientes[lidos], sizeof(Cliente), 1, fp) == 1) {
        lidos++;
    }

    fclose(fp);

    system("clear||cls");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n"); 
    printf("═══════════════════════════════════             Relatório Clientes inativos            ═══════════════════════════════════\n");
    printf("%-7s | %-30s | %-15s | %-40s | %-20s\n", 
           "Status", "Nome", "CPF", "Email", "Cidade");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n"); 

    int ativos = 0;

    for (int i = 0; i < lidos; i++) {
        if (clientes[i].status == 'I') {
            printf("%-7c | %-30s | %-15s | %-40s | %-20s\n",
                   clientes[i].status,
                   clientes[i].nome,
                   clientes[i].cpf,
                   clientes[i].email,
                   clientes[i].cidade);
            ativos++;
        }
    }

    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n");

    if (ativos == 0)
        printf("Nenhum cliente inativo encontrado.\n");
    else
        printf("Total de clientes inattivos listados: %d\n", ativos);
    free(clientes);

    printf("ENTER para continuar");
    Enter();
}


void relat_clientes_ordem_alfabetica(void){
    FILE *fp = fopen(ARQ_CLIENTES, "rb");
    if (fp == NULL) {
        system("clear||cls");
        printf("--- Relatório de Clientes ---\n");
        printf("Nenhum cliente cadastrado ainda.\n");
        Enter();
        return;
    }

    Cliente *lista = NULL;
    Cliente *novo_cliente;
    Cliente temp_cliente;

    while (fread(&temp_cliente, sizeof(Cliente), 1, fp) == 1) {
        novo_cliente = (Cliente*) malloc(sizeof(Cliente));
    
        *novo_cliente = temp_cliente;
        novo_cliente->prox = NULL;

        if (lista == NULL) {
            lista = novo_cliente;
        } else if (strcasecmp(novo_cliente->nome, lista->nome) < 0) {
            novo_cliente->prox = lista;
            lista = novo_cliente;
        } else {
            Cliente *anter = lista;
            Cliente *atual = lista->prox;
            while (atual != NULL && strcasecmp(atual->nome, novo_cliente->nome) < 0) {
                anter = atual;
                atual = atual->prox;
            }
            anter->prox = novo_cliente;
            novo_cliente->prox = atual;
        }
    }

    fclose(fp);

    system("clear||cls");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n");
    printf("═════════════════════════════════       Relatório de Clientes Ordem Alfabética       ═════════════════════════════════════\n");
    printf("%-7s | %-30s | %-15s | %-40s | %-20s\n", 
           "Status", "Nome", "CPF", "Email", "Cidade");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n");

    novo_cliente = lista;
    int quantidade = 0;
    while (novo_cliente != NULL) {
        printf("%-7c | %-30s | %-15s | %-40s | %-20s\n",
               novo_cliente->status,
               novo_cliente->nome,
               novo_cliente->cpf,
               novo_cliente->email,
               novo_cliente->cidade);
        quantidade++;
        novo_cliente = novo_cliente->prox;
    }

    if (quantidade == 0) {
        printf("\nNenhum cliente cadastrado encontrado.\n");
    } else {
        printf("\nTotal de clientes listados: %d\n", quantidade);
    }
    
    Enter();
    novo_cliente = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(novo_cliente);
        novo_cliente = lista;
    }


    //lista encadeada 
    //ela foi reutilizada do professor Flavius Gorgonio
    //disponível em -> https://replit.com/@flaviusgorgonio/ListasComArquivoTexto3c#main.c 
    //tive ajuda do chatgpt para compreeender melhor tambem, principalmente na parte da variável auxiliar
}






//════════════════════════════════════════════════ RELATORIO DE FUNCIONARIOS ATIVOS ════════════════════════════════════════════════



void relatorio_de_funcionario_ativo(void) {
    FILE *fp = fopen(ARQ_FUNCIONARIOS, "rb");

    if (fp == NULL) {
        system("clear||cls");
        printf("--- Relatório de Funcionários ---\n");
        printf("Erro na abertura dp arquivo\n");
        printf("Enter para voltar...\n");
        Enter();
        return;
    }

    Funcionario *funcionario = malloc(MAX_FUNCIONARIO * sizeof(Funcionario));

    int lidos = 0;
    while (lidos < MAX_FUNCIONARIO &&
           fread(&funcionario[lidos], sizeof(Funcionario), 1, fp) == 1) {
        lidos++;
    }

    fclose(fp);

    system("clear||cls");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n"); 
    printf("═════════════════════════════════             Relatório Funcionários Ativos            ═══════════════════════════════════\n");
    printf("%-7s | %-30s | %-15s | %-40s | %-20s\n", 
           "Status", "Nome", "CPF", "Email", "Cargo");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n"); 

    int ativos = 0;

    for (int i = 0; i < lidos; i++) {
        if (funcionario[i].status == 'A') {
            printf("%-7c | %-30s | %-15s | %-40s | %-20s\n",
                   funcionario[i].status,
                   funcionario[i].nome,
                   funcionario[i].cpf,
                   funcionario[i].email,
                   funcionario[i].cargo);
            ativos++;
        }
    }

    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n");

    if (ativos == 0)
        printf("Nenhum funcionário Ativo encontrado.\n");
    else
        printf("Total de Funcionários Ativos listados: %d\n", ativos);

    printf("ENTER para continuar");
    Enter();
}


//════════════════════════════════════════════════ RELATORIO DE FUNCIONARIOS INATIVOS ════════════════════════════════════════════════



void relatorio_de_funcionario_inativo(void) {

    // essa função foi totalmente reutilizada da anterior
    // já que segue a mesma ordem de filtro, a diferença so ocorre no while que testa se esta ativo ou inativo.
     FILE *fp = fopen(ARQ_FUNCIONARIOS, "rb");

    if (fp == NULL) {
        system("clear||cls");
        printf("--- Relatório de Funcionários ---\n");
        printf("Erro na abertura dp arquivo\n");
        printf("Enter para voltar...\n");
        Enter();
        return;
    }

    Funcionario *funcionario = malloc(MAX_FUNCIONARIO * sizeof(Funcionario));

    int lidos = 0;
    while (lidos < MAX_FUNCIONARIO &&
           fread(&funcionario[lidos], sizeof(Funcionario), 1, fp) == 1) {
        lidos++;
    }

    fclose(fp);

    system("clear||cls");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n"); 
    printf("═════════════════════════════════             Relatório Funcionários Ativos            ═══════════════════════════════════\n");
    printf("%-7s | %-30s | %-15s | %-40s | %-20s\n", 
           "Status", "Nome", "CPF", "Email", "Cargo");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n"); 

    int ativos = 0;

    for (int i = 0; i < lidos; i++) {
        if (funcionario[i].status == 'I') {
            printf("%-7c | %-30s | %-15s | %-40s | %-20s\n",
                   funcionario[i].status,
                   funcionario[i].nome,
                   funcionario[i].cpf,
                   funcionario[i].email,
                   funcionario[i].cargo);
            ativos++;
        }
    }

    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n");

    if (ativos == 0)
        printf("Nenhum funcionário inativo encontrado.\n");
    else
        printf("Total de Funcionários inattivos listados: %d\n", ativos);

    printf("ENTER para continuar");
    Enter();
}


void relat_funcionarios_ordem_alfabetica(void) {

    FILE* fp = fopen(ARQ_FUNCIONARIOS, "rb");
    if (!fp) {
        system("clear||cls");
        printf("--- Relatório de Funcionários ---\n");
        printf("Nenhum funcionário cadastrado ainda.\n");
        Enter();
        return;
    }

    Funcionario *lista = NULL;
    Funcionario *novo_funcionario;
    Funcionario temp_funcionario;

    while (fread(&temp_funcionario, sizeof(Funcionario), 1, fp) == 1) {
        novo_funcionario = (Funcionario*) malloc(sizeof(Funcionario));
    
        *novo_funcionario = temp_funcionario;
        novo_funcionario->prox = NULL;

        if (lista == NULL) {
            lista = novo_funcionario;
        } else if (strcasecmp(novo_funcionario->nome, lista->nome) < 0) {
            novo_funcionario->prox = lista;
            lista = novo_funcionario;
        } else {
            Cliente *anter = lista;
            Cliente *atual = lista->prox;
            while (atual != NULL && strcasecmp(atual->nome, novo_funcionario->nome) < 0) {
                anter = atual;
                atual = atual->prox;
            }
            anter->prox = novo_funcionario;
            novo_funcionario->prox = atual;
        }
    }

    fclose(fp);

    system("clear||cls");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n");
    printf("═══════════════════════════════       Relatório de Funcionários Ordem Alfabética       ═══════════════════════════════════\n");
    printf("%-7s | %-30s | %-15s | %-40s | %-20s\n", 
           "Status", "Nome", "CPF", "Email", "Cargo");
    printf("══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════\n");

    novo_funcionario = lista;
    int quantidade = 0;
    while (novo_funcionario != NULL) {
        printf("%-7c | %-30s | %-15s | %-40s | %-20s\n",
               novo_funcionario->status,
               novo_funcionario->nome,
               novo_funcionario->cpf,
               novo_funcionario->email,
               novo_funcionario->cargo);
        quantidade++;
        novo_funcionario = novo_funcionario->prox;
    }

    if (quantidade == 0) {
        printf("\nNenhum cliente cadastrado encontrado.\n");
    } else {
        printf("\nTotal de clientes listados: %d\n", quantidade);
    }

    Enter();
    novo_funcionario = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(novo_funcionario);
        novo_funcionario = lista;
    }

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

    char melhor_cliente[50] = "";
    char melhor_funcionario[50] = "";
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

    printf("╔══════╦═════════╦════════════════════╦════════════════════╦════════════╦══════════════╗\n");
    printf("║ ID   ║ Status  ║ Cliente            ║ Funcionário        ║ Quantidade ║ Valor Total  ║\n");
    printf("╠══════╬═════════╬════════════════════╬════════════════════╬════════════╬══════════════╣\n");

    char nome_cliente[50], nome_funcionario[50];

    for (int i = 0; i < qtd_vendas; i++) {
        v = lista[i];

        // Buscar nomes pelo CPF
        buscar_nome_cliente(v.cpf_cliente, nome_cliente);
        buscar_nome_funcionario(v.cpf_funcionario, nome_funcionario);

        printf("║ %-4d ║    %c    ║ %-18s ║ %-18s ║ %-10d ║ R$ %8.2f  ║\n",
               v.id,
               v.status,
               nome_cliente,
               nome_funcionario,
               v.quantidade,
               v.valor_total);

        total++;
        if (v.status == 'A') {
            ativas++;
            total_itens_vendidos += v.quantidade;
            faturamento_total += v.valor_total;
        } else {
            inativas++;
        }
    }

    printf("╚══════╩═════════╩════════════════════╩════════════════════╩════════════╩══════════════╝\n");

    // Cliente que mais comprou
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
            buscar_nome_cliente(lista[i].cpf_cliente, melhor_cliente);
        }
    }

    // Funcionário que mais vendeu
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
            buscar_nome_funcionario(lista[i].cpf_funcionario, melhor_funcionario);
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