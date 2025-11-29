#ifndef RELATORIOS_H
#define RELATORIOS_H

void relatorio_vendas(void);
void relatorio_vendas_ativas(void);
void relatorio_vendas_inativas(void);

void relatorio_de_cliente_ativo(void);
void relatorio_de_cliente_inativo(void);
void relat_clientes_ordem_alfabetica(void);


void relatorio_de_funcionario_ativo(void);
void relatorio_de_funcionario_inativo(void);
void relat_funcionarios_ordem_alfabetica(void);


void relatorio_bicicletas(void);
void relatorio_bicicletas_ativas(void);
void relatorio_bicicletas_inativas(void);

char menu_relatorio(void);
void modulo_relatorios(void);


char tela_relatorio_clientes(void);
void modulo_relatorios_clientes(void);

char tela_relatorio_funcionarios(void);
void modulo_relatorios_funcionarios(void);

char tela_relatorio_vendas(void);
void modulo_relatorios_vendas(void);

char tela_relatorio_bicicletas(void);
void modulo_relatorios_bicicletas(void);

#endif