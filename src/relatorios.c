#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/vendas.h"
#include "../include/tela_inicial.h"
#include "../include/relatorios.h"
#include "../include/bicicletas.h"
#define ARQ_BICICLETAS "dados/bicicletas.dat"

void modulo_relatorios(void) {
    char opcao;
    do {
        opcao = menu_relatorio();
        switch (opcao) {
            case '1': relatorio_de_cliente_ativo(); break;
            case '2': relatorio_de_cliente_inativo(); break;
            case '3': relatorio_bicicletas(); break;
            case '4': relatorio_funcionario(); break;
            case '5': tela_relatorio_vendas(); break;
            case '6': return; 
            default:
                printf("Opção inválida!\n");
                Enter();
        }
    } while (opcao != '6');
}

char menu_relatorio(void) {
    char op;
    system("clear||cls");
    printf("╔═══════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                Módulo Relatório                               ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                           1. Lista Geral de Clientes ativos                   ║\n");
    printf("║                           2. Lista Geral de Clientes inativos                 ║\n");
    printf("║                           3. Lista Geral de Funcionários ativos               ║\n");
    printf("║                           4. Lista Geral de Clientes inativos                 ║\n");
    printf("║                           5. Lista Geral de Bicicletas                        ║\n");
    printf("║                           6. Lista Geral de Vendas                            ║\n");
    printf("║                           7. Voltar ao menu anterior                          ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
    printf("Digite a opção desejada: ");
    scanf(" %c", &op);
    getchar();
    return op;
}

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

void relatorio_de_cliente_inativo(void) {

    // essa função foi totalmente reutilizada da anterior
    // já que segue a mesma ordem de filtro, a diferença so ocorre no while que testa se esta ativo ou inativo.


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
    
    // usa as constantes do arquivo .h  
    
    // essa parte da exibição foi feita com ajuda do gemini, essas constantes definem o tamanho do que vai ser exibido
    // de acordo com o arquivo .h
    const int NOME_W = 20;
    const int CPF_W = 15;
    const int EMAIL_W = 30;
    const int CIDADE_W = 15;
    
    printf("╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                        Relatório Clientes inativos                                   ║\n");
    printf("╠═══════╦═══════════════════════╦═════════════════╦═══════════════════════════════════╦════════════════╣\n");
    printf("║Status ║ %-*s  ║ %-*s ║ %-*s    ║%-*s ║\n", NOME_W, "Nome", CPF_W, "CPF", EMAIL_W, "Email", CIDADE_W, "Cidade");
    printf("╠═══════╬═══════════════════════╬═════════════════╬═══════════════════════════════════╬════════════════╣\n");

    // essa parte roda o teste, se o cliente estiver inativo, ele será exibido nessa tela
    while (fread(&clien, sizeof(Cliente), 1, fp)) {
        if (clien.status == 'I') {
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
    // vai exibir essa mensagem se nenhum cliente estiver inativo
    if (clientes_encontrados == 0) {
        printf("\nNenhum cliente inativo foi encontrado.\n");
    } else {
        printf("\nTotal de clientes inativos listados: %d\n", clientes_encontrados);
    }
    // exibe essa mensagem junto da tela de relatóeio com o número de clientes ativos
    
    printf("\nENTER para continuar");
    getchar();
}

void relatorio_funcionario(void) {
    system("clear||cls");
    printf("╔════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                Relatório Funcionários                              ║\n");
    printf("╚════════════════════════════════════════════════════════════════════════════════════╝\n");
    printf("║       Nome        ║       CPF       ║           Email             ║      Fone      ║\n");
    printf("╚════════════════════════════════════════════════════════════════════════════════════╝\n");
    printf("ENTER para continuar");
    getchar();
}




void tela_relatorio_vendas(void) {
    int qtd = 0;
    Venda* lista = obter_vendas(&qtd);
    
    if (lista == NULL || qtd == 0) {
        printf("Nenhuma venda cadastrada.\n");
        Enter();
        return;
    }

    system("cls||clear");
    printf("╔════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                                                                    ║\n");
    printf("║                                   RELATÓRIO DE VENDAS                              ║\n");
    printf("║                                                                                    ║\n");
    printf("╚════════════════════════════════════════════════════════════════════════════════════╝\n\n");

    int total_ativas = 0;
    int total_inativas = 0;
    float faturamento = 0.0;
    int total_bicicletas = 0;
    
    char melhor_cliente[TAM_CPF] = "";
    int max_compras = 0;
    char melhor_funcionario[TAM_CPF_FUNC] = "";
    int max_vendas = 0;

    for (int i = 0; i < qtd; i++) {
        if (lista[i].status == 'I') {
            total_inativas++;
            continue;
        }

        total_ativas++;
        faturamento += lista[i].valor_total;
        total_bicicletas += lista[i].quantidade;

        // Contar compras por cliente
        int compras_cliente = 0;
        for (int j = 0; j < qtd; j++) {
            if (lista[j].status == 'A' &&
                strcmp(lista[j].cpf_cliente, lista[i].cpf_cliente) == 0) {
                compras_cliente++;
            }
        }
        if (compras_cliente > max_compras) {
            max_compras = compras_cliente;
            strcpy(melhor_cliente, lista[i].cpf_cliente);
        }

        // Contar vendas por funcionário
        int vendas_func = 0;
        for (int j = 0; j < qtd; j++) {
            if (lista[j].status == 'A' &&
                strcmp(lista[j].cpf_funcionario, lista[i].cpf_funcionario) == 0) {
                vendas_func++;
            }
        }
        if (vendas_func > max_vendas) {
            max_vendas = vendas_func;
            strcpy(melhor_funcionario, lista[i].cpf_funcionario);
        }
    }

    printf("RESUMO GERAL:\n");
    printf("─────────────────────────────────────────────────────────────\n");
    printf("Total de vendas ativas: %d\n", total_ativas);
    printf("Total de vendas canceladas: %d\n", total_inativas);
    printf("Bicicletas vendidas: %d unidades\n", total_bicicletas);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    
    if (total_ativas > 0) {
        printf("Ticket médio: R$ %.2f\n", faturamento / total_ativas);
    }

    printf("\nDESTAQUES:\n");
    printf("─────────────────────────────────────────────────────────────\n");
    
    if (max_compras > 0)
        printf("Cliente que mais comprou: %s (%d compras)\n", melhor_cliente, max_compras);
    
    if (max_vendas > 0)
        printf("Funcionário que mais vendeu: %s (%d vendas)\n", melhor_funcionario, max_vendas);

    printf("\n");
    Enter();
}




void relatorio_bicicletas(void) {
    FILE *arq = fopen(ARQ_BICICLETAS, "rb");
    if (!arq) {
        printf("Nenhuma bicicleta cadastrada.\n");
        Enter();
        return;
    }

    Bicicleta b;
    int total = 0, ativas = 0, inativas = 0;
    int estoque_total = 0;
    float valor_total_estoque = 0.0;

    Bicicleta mais_cara, mais_barata;
    int primeira = 1;

    while (fread(&b, sizeof(Bicicleta), 1, arq) == 1) {
        total++;

        if (b.status == 'A') {
            ativas++;
            estoque_total += b.estoque;
            valor_total_estoque += b.preco * b.estoque;
        } else {
            inativas++;
        }

        if (primeira) {
            mais_cara = b;
            mais_barata = b;
            primeira = 0;
        } else {
            if (b.preco > mais_cara.preco)
                mais_cara = b;
            if (b.preco < mais_barata.preco)
                mais_barata = b;
        }
    }

    fclose(arq);

    system("cls||clear");
    printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║                RELATÓRIO DE BICICLETAS                 ║\n");
    printf("╚════════════════════════════════════════════════════════╝\n\n");

    printf("Total de bicicletas cadastradas: %d\n", total);
    printf(" - Ativas:   %d\n", ativas);
    printf(" - Inativas: %d\n\n", inativas);

    printf("Estoque total (todas as bicicletas ativas): %d unidades\n", estoque_total);
    printf("Valor total estimado do estoque: R$ %.2f\n\n", valor_total_estoque);

    printf("Bicicleta mais cara:\n");
    printf(" - ID: %d | Marca: %s | Modelo: %s | Preço: R$ %.2f\n\n",
           mais_cara.id, mais_cara.marca, mais_cara.modelo, mais_cara.preco);

    printf("Bicicleta mais barata:\n");
    printf(" - ID: %d | Marca: %s | Modelo: %s | Preço: R$ %.2f\n\n",
           mais_barata.id, mais_barata.marca, mais_barata.modelo, mais_barata.preco);

    printf("═══════════════════════════════════════════════════════════════\n");
    Enter();
}