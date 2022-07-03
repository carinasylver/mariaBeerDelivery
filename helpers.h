void estilo(int qtdCaracteres, char caractere){   
    for (int i=1; i < qtdCaracteres; i++ )
    {       
        printf("%c", caractere);
    }
    printf("\n");
}
// limpa a tela no windows/linux
void limpaTela()
{
    #ifdef WINDOWS
        system("cls"); 
    #else
        system("clear"); 
    #endif
}
//limpa o buffer do teclado
void limparBuffer() 
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) { }
}
int menuPrincipal(){
    int cod;
    limpaTela();
    do
    {
    printf("\n\n                   *  MARIA DELIVERY *                                   \n"); 
    printf("'============================================================================='\n");
    printf("||                            ___                                            ||\n");
    printf("||                          .'   '.                                          ||\n");
    printf("||                         /       \\          oOoOo                          ||\n");
    printf("||                        |         |       ,==|||||                         ||\n");
    printf("||                         \\      /       _ || |||||                         ||\n");
    printf("||                          '.___.'    _.-'^|| |||||                         ||\n");
    printf("||                        __/_______.-'     '==HHHHH                         ||\n");
    printf("||                   _.-'` /                   """"""                              ||\n");
    printf("||                -'      /   oOoOo                                          ||\n");
    printf("||                `-._   / ,==|||||                                          ||\n");
    printf("||                    '-/._|| |||||                                          ||\n");
    printf("||                     /  ^|| |||||                                          ||\n");
    printf("||                    /    '==HHHHH                                          ||\n");
    printf("||                   /________""""""                                               ||\n");
    printf("||                   `\\       `\\                                             ||\n");
    printf("||                     \\        `\\   /                                       ||\n");
    printf("||                      \\         `\\/                                        ||\n");
    printf("||                      /                                                    ||\n");
    printf("||                     /                                                     ||\n");
    printf("||                    /_____                                                 ||\n");
    printf("||                                                                           ||\n");
    printf("||---------------------------------------------------------------------------||\n");
    printf("||                    SELECIONE UMA OPCAO DO MENU                            ||\n");
    printf("||---------------------------------------------------------------------------||\n");
    printf("||   1 - CARDAPIO DE CERVEJAS                                                ||\n");   
    printf("||---------------------------------------------------------------------------||\n");
    printf("||   2 - CADASTRE-SE                                                         ||\n"); 
    printf("||---------------------------------------------------------------------------||\n"); 
    printf("||   3 - CONTATO                                                             ||\n");
    printf("||---------------------------------------------------------------------------||\n");      
    printf("||   0 - SAIR                                                                ||\n"); 
    printf("'============================================================================'\n");
    printf("-> ");  
    scanf("%d", &cod); 
    } while (cod < 0 || cod > 3);
    limpaTela();
    return cod;
}
int menuBeer()
{
    int cod;
    printf("\n                * AS CONSAGRADAS *     \n");
    printf("||===========================================================||\n");
    printf("||-----------------------------------------------------------||\n");
    printf("|| BRAHMA |- SKOL |- BUDWEISER |- ANTARTICA |- ORIGINAL      ||\n");
    printf("|| ----------------------------------------------------------||\n\n");
    printf("\n                * AS PRESTIGIADAS *                        \n");
    printf("||===========================================================||\n");
    printf("||-----------------------------------------------------------||\n");
    printf("|| STELLA ARTOIS |- BECKS |- CORONA |- BOHEMIA |- COLORADO   ||\n");
    printf("||-----------------------------------------------------------||\n\n");
            
    printf("OPCAO: |1|- AS PRESTIGIADAS   |2|- AS CONSAGRADAS\n-> "); 
    scanf("%d", &cod);
    system("clear");
    while(cod < 1 || cod > 2)
    {
        codigoNaoEncontrado();
        printf("OPCAO: |1|- AS PRESTIGIADAS   |2|- AS CONSAGRADAS\n-> ");   
        scanf("%d", &cod);
    }
    return cod;
}
void codigoNaoEncontrado()
{
     limpaTela();
     printf("|----------------------------------------------------|\n");
     printf("| CODIGO NAO ENCONTRADO!! INFORME UM CODIGO VALIDO   |\n");
     printf("|----------------------------------------------------|\n");
}
void cadastroCliente()
{    
    Client client;
    int op;
    printf("\n\n");
    printf(".==========================================.\n");      
    printf("|         * MARIA DELIVERY *               |\n");
    printf(".==========================================.\n");        
    printf("|   ** CADASTRE-SE **                      |\n"); 
    estilo(44,'-');                  
    printf("| NOME: digite nome e sobrenome            |\n");
    estilo(44,'-');                
    printf("| EMAIL:  digite o email                   |\n");
    estilo(44,'-'); 
    printf("| SENHA:                                   |\n"); 
    printf("| (a senha deve ter 8 ou mais caracteres)  |\n");
    estilo(44,'-');                                                               
    printf("| CPF : xxx-xxxxxx-xx                      |\n");  
    estilo(44,'-');
    printf("| CELULAR: xx-xxxxx-xxxx                   |\n");
    estilo(44,'-');          
    printf("| QUAL SUA IDADE:                          |\n");
    printf("| sua idade deve ser maior que 18 anos     |\n");
    estilo(44,'-'); 

    limparBuffer();    
    printf("NOME: " );
    fgets(client.nome, sizeof(client.nome), stdin);
    client.nome[strlen(client.nome) -1] = '\0';
    printf("EMAIL: ");
    fgets(client.email, sizeof(client.email), stdin);
    client.email[strlen(client.email) -1] = '\0';
    printf("SENHA: ");
    fgets(client.senha, sizeof(client.senha), stdin);
    client.senha[strlen(client.senha) -1] = '\0';   
    printf("CPF: ");   
    fgets(client.cpf, sizeof(client.cpf), stdin);
    client.cpf[strlen(client.cpf) -1] = '\0';   
    printf("CELULAR: "); 
    fgets(client.telefone, sizeof(client.telefone), stdin);
    client.telefone[strlen(client.telefone) -1] = '\0'; 
    printf("IDADE: ");   
    scanf("%d", &client.idade);  
    limpaTela();

    printf("\n\n");
    printf(".==========================================.\n");      
    printf("|      CADASTRO REALIZADO COM SUCESSO!!    |\n");
    printf(".==========================================.\n");  //grid 44      
    printf("|NOME: %-35s |\n", client.nome); 
    printf("|EMAIL: %-34s |\n", client.email);       
    printf("|SENHA: %-34s |\n", client.senha);        
    printf("|CPF: %-36s |\n", client.cpf);        
    printf("|CELULAR: %-32s |\n", client.telefone);        
    printf("|IDADE: %-34d |\n", client.idade);
    estilo(45,'-'); 
    sleep(10);
    limpaTela();         
}
void login()
{
    Client client;

    estilo(44,'-');  
    printf("|         ENTRAR PARA CONTINUAR           |\n"); 
    estilo(44,'-'); 
    printf("| EMAIL:  digite o email                  |\n");
    estilo(44,'-');
    estilo(44,'-');  
    printf("| SENHA:                                  |\n"); 
    printf("| (a senha deve ter 8 ou mais caracteres) |\n");
    estilo(44,'-');
    limparBuffer();
    printf("EMAIL: ");   
    fgets(client.email, sizeof(client.email), stdin); 
    client.email[strlen(client.email) -1] = '\0';            
    printf("SENHA: ");
    client.senha[strlen(client.senha) -1] = '\0';   
    fgets(client.senha, sizeof(client.senha), stdin);     
    limpaTela();
}
void identificacaoEntrega()
{
    Client client;

    printf(".=========================================.\n");
    printf("|   ** IDENTIFICACAO PARA ENTREGA         |\n"); 
    printf(".=========================================.\n");       
    printf("| DESCRICAO:  | casa | trabalho | etc     |\n");
    estilo(44,'-');         
    estilo(44,'-');            
    printf("| CEP:  | rua | avenida                   |\n");
    estilo(44,'-');                          
    estilo(44,'-');             
    printf("| ENDERECO:   | digite o endereco         |\n");
    estilo(44,'-');                          
    estilo(44,'-');             
    printf("| NUMERO :   | digite o numero            |\n");
    estilo(44,'-');                          
    estilo(44,'-');             
    printf("| BAIRRO:    | digite o bairro            |\n");           
    estilo(44,'-'); 
    
    limparBuffer();
    printf("\nDESCRICAO: ");
    fgets(client.descricao, sizeof(client.descricao), stdin);
    client.descricao[strlen(client.descricao) -1] = '\0';   
    printf("CEP: ");
    fgets(client.cep, sizeof(client.cep), stdin);
    client.cep[strlen(client.cep) -1] = '\0';  
    printf("ENDERECO: ");
    fgets(client.endereco, sizeof(client.endereco), stdin);
    client.endereco[strlen(client.endereco) -1] = '\0';
    printf("NUMERO: ");
    scanf("%d", &client.numero);
    limparBuffer();        
    printf("BAIRRO: ");               
    fgets(client.bairro, sizeof(client.bairro), stdin);
    client.bairro[strlen(client.bairro) -1] = '\0'; 
    limpaTela();
    printf("\n\n");
    estilo(47,'-');
    printf("| DESCRICAO: %-31s |\n", client.descricao);  
    printf("| CEP: %-37s |\n", client.cep);                
    printf("| ENDERECO: %-32s |\n", client.endereco);               
    printf("| NUMERO: %-34d |\n", client.numero);                
    printf("| BAIRRO: %-34s |\n", client.bairro);  
    estilo(47,'-');         
}
void cartaoCredito() 
{
    Pagamento pagamento; 
      
    printf("\n");
    printf(".==========================================.\n");      
    printf("|        ** PAGAMENTO **                   |\n");
    printf(".==========================================.\n"); 
    estilo(44,'-');             
    printf("| NUMERO DO CARTAO:                        |\n");
    printf("| mastercard  | visa | hipercard           |\n");
    estilo(44,'-');
    estilo(44,'-');           
    printf("| NOME IMPRESSO CARTAO:  MARIA S. OLIVEIRA |\n");
    estilo(44,'-');                         
    estilo(44,'-');           
    printf("| CPF DO TITULAR:  xxx-xxxxxxxx            |\n");
    estilo(44,'-');                         
    estilo(44,'-');           
    printf("| TELEFONE DO TITULAR: xxxxx-xxxx          |\n");
    estilo(44,'-');                         
    estilo(44,'-');           
    printf("| DATA DE VALIDADE:   mes | ano            |\n");           
    estilo(44,'-');                         
    estilo(44,'-');            
    printf("| COD. SEGURANCA:  xxx                     |\n");           
    estilo(44,'-');                        
    printf("| PARCELAR EM: xx                          |\n");           
    estilo(44,'-');
    limparBuffer();
    printf("NUMERO DO CARTAO: ");
    fgets(pagamento.numCartao, sizeof(pagamento.numCartao),stdin);
    printf("NOME IMPRESSO CARTAO: ");
    fgets(pagamento.nomeCartao, sizeof(pagamento.nomeCartao),stdin);
    printf("CPF DO TITULAR: ");
    fgets(pagamento.info.cpf, sizeof(pagamento.info.cpf),stdin);
    printf("TELEFONE DO TITULAR: "); 
    fgets(pagamento.info.telefone, sizeof(pagamento.info.telefone),stdin);
    printf("DATA DE VALIDADE: ");            
    fgets(pagamento.dataValidade, sizeof(pagamento.dataValidade),stdin); 
    printf("COD. SEGURANCA: "); 
    scanf("%d", &pagamento.codSeguranca); 
    printf("PARCELAR EM: "); 
    scanf("%d", &pagamento.parcelas); 
    limpaTela();  
}
void bebidaIndisponivel()
{
    printf("\n");                
    estilo(33,'-'); 
    printf("| INDISPONIVEL!!!              |\n"); 
    printf("| SELECIONE OUTRA BEBIDA       |\n"); 
    estilo(33,'-'); 
}
void quantidadeInvalida()
{
    printf("\n");                
    estilo(42,'-'); 
    printf("| QUANTIDADE SELECIONADA EH INVALIDA!!! |\n"); 
    estilo(42,'-');
}
void pedidoRealizado()
{
    estilo(47,'-');
    printf("|         OBRIGADA PELA COMPRA!              |\n");
    printf("|         BEBA COM MODERACAO                 |\n");
    printf("|                                            |\n");
    printf("|              _.._..,_,_                    |\n");
    printf("|             (          )                   |\n");
    printf("|              ]~,-.-~~-[                    |\n");     
    printf("|            .=])' (;  ([                    |\n"); 
    printf("|            | ]:: '    [                    |\n");
    printf("|            '=]): .)  ([                    |\n");
    printf("|              |:: '    |                    |\n");
    printf("|               ~~----~~                     |\n");
    estilo(47,'-'); 
}
void compraCancelada()
{ 
    limpaTela();
    printf("\n\n");
    estilo(61,'-');      
    printf("|                                                          |\n");
    printf("|  TEM CERTEZA QUE VOCE NAO VAI QUERER UM TRAGO HOJE !!!!  |\n");      
    printf("|                                                          |\n");
    estilo(61,'-');  
}
void contatoBeerDelivery()
{
    limpaTela();
    printf("\n\n");            
    estilo(69,'-');
    printf("| CGS COMMERCE COMERCIO DE BEBIDAS LTDA - CNPJ: 11.111.111/0001-11 |\n");
    printf("| Rua Alberto Santanna, 1111 - CEP: 11111-111                      |\n");      
    printf("| Theed/RS                                                         |\n");
    estilo(69,'-');              
}
