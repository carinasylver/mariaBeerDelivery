#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"
#include "helpers.h"

int main(void){
    int codigoMenu;
    int codigoMarca;
    int quantidBeer; 
    float precoCompra=0;
    int confirma;
    
    ///custo das bebidas
    float brahmaCusto1 = 5.59, brahmaCusto2 = 2.69, skolCusto3 = 1.89, skolCusto4 = 5.69, budweiserCusto5 = 3.29, budweiserCusto6 = 3.99, antarticaCusto7 = 3.19, antarticaCusto8 = 4.79, originalCusto9 = 3.19, originalCusto10 = 6.29, stellaArtoisCusto11 = 3.99, stellaArtoisCusto12 = 5.49, becksCusto13 = 4.49, becksCusto14 = 9.99, coronaCusto15 = 5.49, coronaCusto16 = 3.79, bohemiaCusto17 = 3.49, bohemiaCusto18 = 5.89, coloradoCusto19 = 5.99, coloradoCusto20 = 10.99;

    //quantidade de bebidas em estoque
    int brahmaDisponivel1=10, brahmaDisponivel2=10, skolDisponivel3=10, skolDisponivel4=10, budweiserDisponivel5=10, budweiserDisponivel6=10, antarticaDisponivel7=10, antarticaDisponivel8=10, originalDisponivel9=10, originalDisponivel10=10, stellaArtoisDisponivel11=10, stellaArtoisDisponivel12=10, becksDisponivel13=10, becksDisponivel14=10, coronaDisponivel15=10, coronaDisponivel16=10, bohemiaDisponivel17=10, bohemiaDisponivel18=10, coloradoDisponivel19=10, coloradoDisponivel20=10;

    do{
        codigoMenu = 0;

        menuBeer(); 
        scanf("%d", &codigoMenu);
        system("cls");

        if(codigoMenu == 1){ 
            do{          
                printf("\n                       * AS CONSAGRADAS *                                \n");
                printf("||===========================================================================||\n");
                printf("||---------------------------------------------------------------------------||\n");
                printf("|| 1 - BRAHMA  |  - SKOL  |  - BUDWEISER | - ANTARTICA  |  - ORIGINAL        ||\n");
                printf("||---------------------------------------------------------------------------||\n\n");

                printf("\n                       * AS PRESTIGIADAS *                                \n");
                printf("||===========================================================================||\n");
                printf("||---------------------------------------------------------------------------||\n");
                printf("|| 2 - STELLA ARTOIS  |  - BECKS  |  - CORONA |  - BOHEMIA  |  - COLORADO    ||\n");
                printf("||---------------------------------------------------------------------------||\n\n");
                printf("ESCOLHA O CODIGO DA MARCA DESEJADA: ");
                scanf("%d", &codigoMarca); 
                

                while((codigoMarca<1)||(codigoMarca>2)){
                    printf("\n\n");
                    printf("|---------------------------------------------------------------|\n"); 
                    printf("| CODIGO NAO ENCONTRADO!! INFORME UM CODIGO VALIDO |1| OU |2|   |\n"); 
                    printf("|---------------------------------------------------------------|\n"); 

                    printf("\nESCOLHA O CODIGO DA MARCA DESEJADA: ");
                    scanf("%d", &codigoMarca);
                }                    
                
                system("cls");
                
                switch(codigoMarca){
                case 1:      
                    printf("\n|===========================================================================================|\n");
                    printf("|                              *AS CONSAGRADAS*                                             |\n"); 
                    printf("|===========================================================================================|\n"); 
                    printf("|                                                                                           |\n"); 
                    printf("|  CODIGO	CERVEJA                                         PRECO          DISPONIVEL   |\n"); 
                    printf("|-------------------------------------------------------------------------------------------|\n"); 
                    printf("|    1		BRAHMA CHOPP | APENAS O LIQUIDO -  600ml       R$%.2f         %.2dunid.       |\n", brahmaCusto1, brahmaDisponivel1 );
                    printf("|-------------------------------------------------------------------------------------------|\n");   
                    printf("|    2		BRAHMA CHOPP | LATA -  350ml                   R$%.2f         %.2dunid.       |\n", brahmaCusto2, brahmaDisponivel2 );
                    printf("|-------------------------------------------------------------------------------------------|\n");   
                    printf("|    3		SKOL | APENAS O LIQUIDO -  300ml               R$%.2f         %.2dunid.       |\n", skolCusto3, skolDisponivel3 ); 
                    printf("|-------------------------------------------------------------------------------------------|\n"); 
                    printf("|    4		SKOL | APENAS O LIQUIDO - 1L                   R$%.2f         %.2dunid.       |\n", skolCusto4,  skolDisponivel4); 
                    printf("|-------------------------------------------------------------------------------------------|\n"); 
                    printf("|    5		BUDWEISER | LATA -  350ml                      R$%.2f         %.2dunid.       |\n", budweiserCusto5, budweiserDisponivel5 );
                    printf("|-------------------------------------------------------------------------------------------|\n");   
                    printf("|    6		BUDWEISER | VASILHAME INCLUSO -  330ml         R$%.2f         %.2dunid.       |\n", budweiserCusto6, budweiserDisponivel6 );
                    printf("|-------------------------------------------------------------------------------------------|\n");   
                    printf("|    7		ANTARCTICA | LATA -  473ml                     R$%.2f         %.2dunid.       |\n", antarticaCusto7, antarticaDisponivel7 ); 
                    printf("|-------------------------------------------------------------------------------------------|\n"); 
                    printf("|    8		ANTARCTICA | APENAS O LIQUIDO -  600ml         R$%.2f         %.2dunid.       |\n", antarticaCusto8, antarticaDisponivel8 ); 
                    printf("|-------------------------------------------------------------------------------------------|\n");   
                    printf("|    9		ORIGINAL  | LATA -  350ml                      R$%.2f         %.2dunid.       |\n", originalCusto9, originalDisponivel9 ); 
                    printf("|-------------------------------------------------------------------------------------------|\n"); 
                    printf("|    10		ORIGINAL | APENAS O LIQUIDO -  600ml           R$%.2f         %.2dunid.       |\n", originalCusto10, originalDisponivel10 ); 
                    printf("|===========================================================================================|\n");
                    printf("\nADICIONAR AO CARRINHO (INFORME O CODIGO): ");    
                    scanf("%d",&codigoMarca);

                    while((codigoMarca<1)||(codigoMarca>10)){
                        printf("\n\n");
                        printf("|---------------------------------------------------------------|\n"); 
                        printf("| CODIGO NAO ENCONTRADO!! INFORME UM CODIGO VALIDO |1| A |10|   |\n"); 
                        printf("|---------------------------------------------------------------|\n"); 

                        printf("\nESCOLHA O CODIGO DA MARCA DESEJADA: ");
                        scanf("%d", &codigoMarca);
                    }

                    printf("INFORME A QUANTIDADE: ");
                    scanf("%d", &quantidBeer);                        
                
                break;                             
                case 2:                             
                    printf("\n|===========================================================================================|\n");
                    printf("|                              *AS PRESTIGIADAS*                                            |\n"); 
                    printf("|===========================================================================================|\n"); 
                    printf("|                                                                                           |\n"); 
                    printf("|  CODIGO	CERVEJA                                           PRECO       DISPONIVEL    |\n"); 
                    printf("|-------------------------------------------------------------------------------------------|\n"); 
                    printf("|    11		STELLA ARTOIS | VASILHAME INCLUSO -  275ml        R$%.2f         %.2dunid.    |\n", stellaArtoisCusto11, stellaArtoisDisponivel11 );
                    printf("|-------------------------------------------------------------------------------------------|\n");   
                    printf("|    12		STELLA ARTOIS - SEM GLUTEN - 330ml                R$%.2f         %.2dunid.    |\n", stellaArtoisCusto12, stellaArtoisDisponivel12 );
                    printf("|-------------------------------------------------------------------------------------------|\n");   
                    printf("|    13		BECKS | LATA -  350ml                             R$%.2f         %.2dunid.    |\n", becksCusto13, becksDisponivel13); 
                    printf("|-------------------------------------------------------------------------------------------|\n"); 
                    printf("|    14		BECKS | VASILHAME INCLUSO -  600ml                R$%.2f         %.2dunid.    |\n", becksCusto14, becksDisponivel14); 
                    printf("|-------------------------------------------------------------------------------------------|\n"); 
                    printf("|    15		CORONA EXTRA | VASILHAME INCLUSO -  330ml         R$%.2f         %.2dunid.    |\n", coronaCusto15, coronaDisponivel15);
                    printf("|-------------------------------------------------------------------------------------------|\n");   
                    printf("|    16		CORONITA | VASILHAME INCLUSO -  210ml             R$%.2f         %.2dunid.    |\n", coronaCusto16, coronaDisponivel16);
                    printf("|-------------------------------------------------------------------------------------------|\n");   
                    printf("|    17		BOHEMIA | APENAS O LIQUIDO -  355ml               R$%.2f         %.2dunid.    |\n", bohemiaCusto17, bohemiaDisponivel17); 
                    printf("|-------------------------------------------------------------------------------------------|\n"); 
                    printf("|    18		BOHEMIA | APENAS O LIQUIDO -  600ml               R$%.2f         %.2dunid.    |\n", bohemiaCusto18, bohemiaDisponivel18); 
                    printf("|------------------------------------------------------------------------------------------|\n");                       
                    printf("|    19		COLORADO APPIA |  LATA -  350ml                   R$%.2f         %.2dunid.    |\n", coloradoCusto19, coloradoDisponivel19); 
                    printf("|-------------------------------------------------------------------------------------------|\n"); 
                    printf("|    20		COLORADO APPIA | VASILHAME INCLUSO -  600ml       R$%.2f        %.2dunid.    |\n", coloradoCusto20, coloradoDisponivel20); 
                    printf("|===========================================================================================|\n");
                    printf("\nADICIONAR AO CARRINHO (INFORME O CODIGO): ");    
                    scanf("%d",&codigoMarca);                         

                    while((codigoMarca<11)||(codigoMarca >20)){
                        printf("\n\n");
                        printf("|---------------------------------------------------------------|\n"); 
                        printf("| CODIGO NAO ENCONTRADO!! INFORME UM CODIGO VALIDO |11| A |20|  |\n"); 
                        printf("|---------------------------------------------------------------|\n"); 

                        printf("\nESCOLHA O CODIGO DA MARCA DESEJADA: ");
                        scanf("%d", &codigoMarca);
                    }

                    printf("INFORME A QUANTIDADE: ");
                    scanf("%d", &quantidBeer); 
                }

                switch(codigoMarca){
                case 1:
                    if(brahmaDisponivel1 == 0){  
                        bebidaIndisponivel();  
                        break;
                    } 

                    if(quantidBeer > brahmaDisponivel1) {
                        quantidadeInvalida();
                        break;
                    }

                    precoCompra += quantidBeer * brahmaCusto1;                            
                    brahmaDisponivel1-=quantidBeer;
                    break;
                case 2:
                    if(brahmaDisponivel2 == 0){
                        bebidaIndisponivel();
                        break;  
                    }

                    if(quantidBeer > brahmaDisponivel2) {
                        quantidadeInvalida();
                        break;
                    }

                    precoCompra += quantidBeer * brahmaCusto2; 
                    brahmaDisponivel2-=quantidBeer;
                    break;
                case 3:
                    if(skolDisponivel3 == 0){
                        bebidaIndisponivel();
                        break;  
                    }

                    if(quantidBeer > skolDisponivel3) {
                        quantidadeInvalida();
                        break;
                    }

                    precoCompra += quantidBeer * skolCusto3;
                    skolDisponivel3-= quantidBeer;                     
                    break;
                case 4:
                    if(skolDisponivel4 == 0){
                        bebidaIndisponivel();
                        break;  
                    } 

                    if(quantidBeer > skolDisponivel4) {
                        quantidadeInvalida();
                        break; 
                    } 

                    precoCompra += quantidBeer * skolCusto4;
                    skolDisponivel4-=quantidBeer;                  
                    break;                                 
                case 5:
                    if(budweiserDisponivel5 == 0){
                        bebidaIndisponivel();
                        break;
                    } 

                    if(quantidBeer > budweiserDisponivel5){
                        bebidaIndisponivel();
                        break; 
                    }

                    precoCompra += quantidBeer * budweiserCusto5;
                    budweiserDisponivel5-=quantidBeer;                      
                    break;                                 
                case 6: 
                    if(budweiserDisponivel6 == 0){
                        bebidaIndisponivel();
                        break;  
                    }

                    if(quantidBeer > budweiserDisponivel6){
                        quantidadeInvalida();
                        break; 
                    }  
                    precoCompra += quantidBeer * budweiserCusto6;
                    budweiserDisponivel6-=quantidBeer;
                        
                    break;                                 
                case 7:
                    if(antarticaDisponivel7 == 0){
                        bebidaIndisponivel();
                        break;  
                    } 

                    if(quantidBeer > antarticaDisponivel7){
                        quantidadeInvalida();
                        break;
                    }

                    precoCompra += quantidBeer * antarticaCusto7;
                    antarticaDisponivel7-=quantidBeer;
                    break;                                 
                case 8:
                    if(antarticaDisponivel8 == 0){
                        bebidaIndisponivel();
                        break;  
                    } 

                    if(quantidBeer > antarticaDisponivel8){
                        quantidadeInvalida();
                        break;
                    }

                    precoCompra += quantidBeer * antarticaCusto8;
                    antarticaDisponivel8-=quantidBeer;  
                    break; 
                case 9:
                    if(originalDisponivel9 == 0){
                        bebidaIndisponivel();
                        break;  
                    } 

                    if(quantidBeer > originalDisponivel9){
                        quantidadeInvalida();
                        break;
                    } 
                    precoCompra += quantidBeer * originalCusto9;
                    originalDisponivel9-=quantidBeer;                         
                    break;                                 
                case 10: 
                    if(originalDisponivel10 == 0){
                        bebidaIndisponivel();
                        break;  
                    }

                    if(quantidBeer > originalDisponivel10){
                        quantidadeInvalida();
                        break;
                    }

                    precoCompra += quantidBeer * originalCusto10;
                    originalDisponivel10-=quantidBeer;
                    
                    break;     
                case 11:
                    if(stellaArtoisDisponivel11 == 0){  
                        bebidaIndisponivel();
                        break;   
                    }
                    if(quantidBeer > stellaArtoisDisponivel11){
                        quantidadeInvalida();
                        break;
                    } 

                    precoCompra += quantidBeer * stellaArtoisCusto11;                            
                    stellaArtoisDisponivel11-=quantidBeer;                      
                    break;
                case 12:
                    if(stellaArtoisDisponivel12 == 0){
                        bebidaIndisponivel();
                        break;  
                    }
                    if(quantidBeer > stellaArtoisDisponivel12){
                        quantidadeInvalida();
                        break;
                    } 
                    precoCompra += quantidBeer * stellaArtoisCusto12; 
                    stellaArtoisDisponivel12-=quantidBeer;                            
                    break;
                case 13:
                    if(becksDisponivel13 == 0){
                        bebidaIndisponivel();
                        break;  
                    
                    }

                    if(quantidBeer > becksDisponivel13){
                        quantidadeInvalida();
                        break;
                    }

                    precoCompra += quantidBeer * becksCusto13;
                    becksDisponivel13-= quantidBeer; 
                    break;
                case 14: 
                    if(becksDisponivel14 == 0){
                        bebidaIndisponivel();
                        break;   
                    } 

                    if(quantidBeer > becksDisponivel14){
                        quantidadeInvalida();
                        break;
                    }
                    precoCompra += quantidBeer * becksCusto14;
                    becksDisponivel14-=quantidBeer;
                        
                    break;                                 
                case 15: 
                    if(coronaDisponivel15  == 0){
                        bebidaIndisponivel();
                        break;   
                    }

                    if(quantidBeer > coronaDisponivel15){
                        quantidadeInvalida();
                        break;
                    }

                    precoCompra += quantidBeer * coronaCusto15;
                    coronaDisponivel15-=quantidBeer;
                        
                    break;                                 
                case 16: 
                    if(coronaDisponivel16 == 0){
                        bebidaIndisponivel();
                        break;   
                    }

                    if(quantidBeer > coronaDisponivel16){
                        quantidadeInvalida();
                        break;
                    }

                    precoCompra += quantidBeer * coronaCusto16;
                    coronaDisponivel16-=quantidBeer;                           
                    break;                                 
                case 17:
                    if(bohemiaDisponivel17 == 0){
                        bebidaIndisponivel();
                        break;   
                    } 

                    if(quantidBeer > bohemiaDisponivel17){
                        quantidadeInvalida();
                        break;
                    }

                    precoCompra += quantidBeer * bohemiaCusto17;
                    bohemiaDisponivel17-=quantidBeer;                          
                    break;                                 
                case 18: 
                    if(bohemiaDisponivel18 == 0){
                        bebidaIndisponivel();
                        break;   
                    } 
                    if(quantidBeer > bohemiaDisponivel18){
                        quantidadeInvalida();
                        break;
                    }

                    precoCompra += quantidBeer * bohemiaCusto18;
                    bohemiaDisponivel18-=quantidBeer;                          
                    break;                                 
                case 19: 
                    if(coloradoDisponivel19 == 0){
                        bebidaIndisponivel();
                        break;   
                    }

                    if(quantidBeer > coloradoDisponivel19){
                        quantidadeInvalida();
                        break;
                    }  

                    precoCompra += quantidBeer * coloradoCusto19;
                    coloradoDisponivel19-=quantidBeer;                          
                    break;                                 
                case 20: 
                    if(coloradoDisponivel20 == 0){
                        bebidaIndisponivel();
                        break;   
                    }

                    if(quantidBeer > coloradoDisponivel20){
                        quantidadeInvalida();
                        break;
                    }   

                    precoCompra += quantidBeer * coloradoCusto20;
                    coloradoDisponivel20-=quantidBeer;                        
                    break;       
                }    
                    
                estilo(94,'-');
                printf("|SUBTOTAL: R$%.2f                                                                           |\n", precoCompra);
                estilo(94,'-');
                estilo(94,'-');
                printf("| ADICIONAR MAIS PRODUTOS -> |1|   FINALIZAR A COMPRA ->  |2|    CANCELAR COMPRA -> |0|     |\n");
                estilo(94,'-');

                scanf("%d",&confirma);
                system("cls");

            } while (confirma == 1);

            setbuf(stdin, NULL); 

            if (confirma == 2) {
                char respCadastro;

                estilo(43,'-');  
                printf("| VOCE JA EH CADASTRADO?   [S]im [N]AO   |\n");
                estilo(43,'-');

                scanf("%c", &respCadastro);
                
                system("cls");
                setbuf(stdin, NULL);

                if ((respCadastro == 's') || (respCadastro =='S')) {           
                    char email[50];
                    char senha[10];

                    estilo(44,'-');  
                    printf("|         ENTRAR PARA CONTINUAR           |\n"); 
                    estilo(44,'-'); 
                    printf("| EMAIL:  digite o email                  |\n");
                    estilo(44,'-');
                    estilo(44,'-');  
                    printf("| SENHA:                                  |\n"); 
                    printf("| (a senha deve ter 8 ou mais caracteres) |\n");
                    estilo(44,'-'); 
                    printf("EMAIL: ");
                    fgets(email, sizeof(email), stdin);
                    printf("SENHA: ");
                    fgets(senha, sizeof(senha), stdin); 

                    system("cls"); 
                } else {
                    cadastroCliente();
                } 

                int opPagamento;

                system("cls");
                
                estilo(87,'-');
                printf("|     * PAGAMENTO ONLINE *    |   * PAGAMENTO NA ENTREGA *                           |\n");
                estilo(87,'-');
                estilo(87,'-');
                printf("|   CARTAO DE CREDITO->|1|    |   DINHEIRO ->|2|   CARTAO DE CREDITO OU DEBITO ->|3| |\n");
                estilo(87,'-');                               
                printf("\nSELECIONAR FORMA DE PAGAMENTO:");

                scanf("%i",&opPagamento);
                
                system("cls");

                if(opPagamento == 1){
                    
                    pagamento();
                    Pagamento pagamento;

                    setbuf(stdin, NULL);

                    printf("NUMERO DO CARTAO: ");
                    fgets(pagamento.numCartao,sizeof(pagamento.numCartao),stdin);    

                    printf("NOME IMPRESSO CARTAO: ");
                    fgets(pagamento.nomeCartao,sizeof(pagamento.nomeCartao),stdin);

                    printf("CPF DO TITULAR: ");
                    fgets(pagamento.cpf,sizeof(pagamento.cpf),stdin);   

                    printf("TELEFONE DO TITULAR: "); 
                    fgets(pagamento.tel,sizeof(pagamento.tel),stdin);

                    printf("DATA DE VALIDADE: ");            
                    fgets(pagamento.dataValidade,sizeof(pagamento.dataValidade),stdin);  

                    printf("COD. SEGURANCA: ");    
                    fgets(pagamento.codSeguranca,sizeof(pagamento.codSeguranca),stdin); 

                    printf("PARCELAR EM: ");   
                    fgets(pagamento.parcelas,sizeof(pagamento.parcelas),stdin);

                    
                } else if (opPagamento == 2) {

                    setbuf(stdin, NULL);
                    
                    estilo(39,'-'); 
                    printf("|VALOR DO SEU PEDIDO: R$%.2f        |\n", precoCompra);
                    estilo(39,'-');
                    printf("|VOCE PRECISA DE TROCO? [S]im [N]AO  |\n");
                    estilo(39,'-');

                    char respTroco;
                    scanf("%c", &respTroco);
                    
                    if ((respTroco == 's') || (respTroco =='S')){
                        int troco;

                        printf("|PRECISA DE TROCO PARA QUANTO ? R$");
                        scanf("%d", &troco);
                    } 

                }                 
                
                system("cls");                                  
                identificacaoEntrega();

                setbuf(stdin, NULL);

                Endereco endereco;

                printf("\nDESCRICAO: ");
                fgets(endereco.descricao,sizeof(endereco.descricao),stdin);
                strtok(endereco.descricao, "\n");

                printf("CEP: ");
                fgets(endereco.cep,sizeof(endereco.cep),stdin);
                strtok(endereco.cep, "\n"); 

                printf("ENDERECO: ");
                fgets(endereco.endereco,sizeof(endereco.endereco),stdin);
                strtok(endereco.endereco, "\n");

                printf("NUMERO: ");
                scanf("%s",endereco.numero);
                strtok(endereco.numero, "\n");   
                setbuf(stdin, NULL); 
                printf("BAIRRO: ");               
                fgets(endereco.bairro,sizeof(endereco.bairro),stdin);
                strtok(endereco.bairro, "\n");     

                system("cls"); 
                                    
                printf("\n\n");
                estilo(47,'-');
                printf("|  PEDIDO N. xxxxxxxxx!!                     |\n"); 
                estilo(47,'-'); 
                estilo(47,'-');
                printf("| TOTAL: R$ %.2f                            |\n", precoCompra);
                estilo(47,'-');
                printf("| DESCRICAO: %-31s |\n", endereco.descricao);  
                printf("| CEP: %-37s |\n", endereco.cep);                
                printf("| ENDERECO: %-32s |\n", endereco.endereco);               
                printf("| NUMERO: %-34s |\n", endereco.numero);                
                printf("| BAIRRO: %-34s |\n", endereco.bairro);              
               
                pedidoRealizado(); 

                system("pause");
                system("cls"); 
            } else {                            
                system("cls");

                printf("\n\n"); 
                estilo(22,'-');             
                printf("| COMPRA CANCELADA   |\n");            
                estilo(22,'-');

                system("pause");
                system("cls");

                compraCancelada();

                system("pause");
                system("cls");
            }        

        } else if(codigoMenu==2){ //cadastro no sistema
            cadastroCliente();
           
            system("cls");
        } else if(codigoMenu==3){ //contato empresa 
            contatoBeerDelivery();

            system("pause");
            system("cls");
        }
    } while(codigoMenu != 0);

    printf("\nBYE BYE");
    return 0;
} 
