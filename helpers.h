void estilo(int numTracejado, char tracejado){   
    for (int i=1; i < numTracejado; i++ ){       
        printf("%c", tracejado);
    }
    printf("\n");
}

void menuBeer(){
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
    printf("||               cgs  /_____                                                 ||\n");
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
}
void cadastroCliente();
void cadastroCliente(){    
    Client client; 

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

    setbuf(stdin, NULL);
    printf("NOME: " );
    fgets(client.nome, sizeof(client.nome), stdin);
    strtok(client.nome, "\n");
    printf("EMAIL: ");
    fgets(client.email, sizeof(client.email), stdin);
    strtok(client.email, "\n");
    printf("SENHA: ");
    fgets(client.senha, sizeof(client.senha), stdin);
    strtok(client.senha, "\n");
    printf("CPF: ");
    fgets(client.cpf, sizeof(client.cpf), stdin);
    strtok(client.cpf, "\n");
    printf("CELULAR: ");
    fgets(client.telefone, sizeof(client.telefone), stdin);
    strtok(client.telefone, "\n");
    printf("IDADE: ");
    fgets(client.idade, sizeof(client.idade), stdin);
    strtok(client.idade, "\n");
    system("cls");

    printf("\n\n");
    printf(".==========================================.\n");      
    printf("|      CADASTRO REALIZADO COM SUCESSO!!    |\n");
    printf(".==========================================.\n");  //grid 44      
    printf("|NOME: %-35s |\n", client.nome); 
    printf("|EMAIL: %-34s |\n", client.email);       
    printf("|SENHA: %-34s |\n", client.senha);        
    printf("|CPF: %-36s |\n", client.cpf);        
    printf("|CELULAR: %-32s |\n", client.telefone);        
    printf("|IDADE: %-34s |\n", client.idade);
    estilo(45,'-');         
    system("pause");
  
}
void identificacaoEntrega(){
    

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
     
}
void pagamento(){     
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
}
void bebidaIndisponivel(){
    system("cls");

    printf("\n\n");                
    estilo(33,'-'); 
    printf("| INDISPONIVEL!!!              |\n"); 
    printf("| SELECIONE OUTRA BEBIDA       |\n"); 
    estilo(33,'-');

    system("pause");
    system("cls"); 
}

void quantidadeInvalida(){
    system("cls"); 

    printf("\n\n");                
    estilo(42,'-'); 
    printf("| QUANTIDADE SELECIONADA EH INVALIDA!!! |\n"); 
    estilo(42,'-');
    
    system("pause");
    system("cls"); 
}

void pedidoRealizado(){
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
void compraCancelada(){ 
    system ("cls");
    printf("\n\n");
    estilo(61,'-');      
    printf("|                                                          |\n");
    printf("|  TEM CERTEZA QUE VOCE NAO VAI QUERER UM TRAGO HOJE !!!!  |\n");      
    printf("|                                                          |\n");
    estilo(61,'-');  
}
void contatoBeerDelivery(){
    system("cls");
    printf("\n\n");            
    estilo(69,'-');
    printf("| CGS COMMERCE COMERCIO DE BEBIDAS LTDA - CNPJ: 11.111.111/0001-11 |\n");
    printf("| Rua Alberto Santanna, 1532 - CEP: 11111-111                      |\n");      
    printf("| Pelotas/RS                                                       |\n");
    estilo(69,'-');
              
}
