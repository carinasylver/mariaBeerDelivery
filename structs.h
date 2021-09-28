typedef struct Client {    
    char nome[50];
    char email[50];
    char senha[10];
    char cpf[15];  
    char telefone[15];    
    char idade[4];
} Client;

typedef struct Endereco {    
    char descricao[12]; 
    char cep[12];
    char endereco[50];
    char numero[5];
    char bairro[50];
} Endereco;

typedef struct Pagamento {
    char numCartao[20];
    char nomeCartao[30];
    char cpf[15];
    char tel[15];
    char dataValidade[10];
    char codSeguranca[5];
    char parcelas[5]; 
} Pagamento;