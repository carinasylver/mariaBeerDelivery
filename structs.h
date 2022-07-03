#ifndef helpers_H
#define helpers_H

#define BEERMENU 1
#define CADASTRO 2
#define CONTATO 3
#define ASCONSAGRADAS 1
#define ASPRESTIGIADAS 2

typedef struct cliente {    
    char nome[30];
    char cep[12];
    char endereco[50];
    int numero;
    char bairro[50];
    char email[30];
    char senha[15];
    char cpf[15];  
    char telefone[15];    
    int idade;
    char descricao[12];     
} Client;

typedef struct pagamento {
    char numCartao[20];
    char nomeCartao[30];
    Client info; 
    char dataValidade[10];
    int codSeguranca;
    int parcelas; 
} Pagamento;

//PROTOTIPOS DAS FUNCOES
int menuPrincipal();
int menuBeer();
void codigoNaoEncontrado();
void login();
void cadastroCliente();
void cartaoCredito();
void identificacaoEntrega();
void pedidoRealizado();
void contatoBeerDelivery();

#endif