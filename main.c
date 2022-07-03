#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 
#include "structs.h"
#include "helpers.h"


int main(void){
    int codigoMenu;
    int codigoMarca;
    int quantidBeer; 
    float precoCompra=0;
    int confirma;
    
    /*CUSTO DAS BEBIDAS*/
    float brahma[2] = {5.59, 2.69}, 
    skol[2] = {1.89, 5.69}, 
    budweiser[2] = {3.29, 3.99},
    antartica[2] = {3.19, 4.79},
    original[2] = {3.19, 6.29}, 
    stellaArtois[2] = {3.99, 5.49}, 
    becks[2] = {4.49, 9.99},
    corona[2] = {5.49, 3.79}, 
    bohemia[2] = {3.49, 5.89}, 
    colorado[2] = {5.99, 10.99};

    /*QUANTIDADE DE BEBIDA EM ESTOQUE*/
    int brahmaDisponivel[2] = {1000, 1000}, 
    skolDisponivel[2] = {1000, 1000}, 
    budweiserDisponivel[2] = {1000, 1000}, 
    antarticaDisponivel[2] = {1000, 1000}, 
    originalDisponivel[2] = {1000, 1000}, 
    stellaArtoisDisponivel[2] = {1000, 1000},
    becksDisponivel[2] = {1000, 1000},
    coronaDisponivel[2] = {1000, 1000},
    bohemiaDisponivel[2] = {1000, 1000}, 
    coloradoDisponivel[2] = {1000, 1000};
      
    do //MENU PRINCIPAL
    {
            codigoMenu = menuPrincipal(); 
            if (codigoMenu == BEERMENU) // CARDAPIO DE CERVEJAS
            {
                do
                {
                    int opcao = menuBeer(); // OPCAO : AS CONSAGRADAS || AS PRESTIGIADAS
                    if(opcao == ASCONSAGRADAS){         
                            estilo(90,'='); 
                            printf("|                              *AS CONSAGRADAS*                                         |\n"); 
                            estilo(90,'='); 
                            estilo(90,'-');                                                                                           
                            printf("|  CODIGO	CERVEJA                                        PRECO         DISPONIVEL |\n"); 
                            estilo(90,'-');    
                            printf("|    1		BRAHMA CHOPP | APENAS O LIQUIDO -  600ml       R$%.2f         %-10d|\n", brahma[0], brahmaDisponivel[0]);
                            estilo(90,'-');   
                            printf("|    2		BRAHMA CHOPP | LATA -  350ml                   R$%.2f         %-10d|\n", brahma[1], brahmaDisponivel[1]);
                            estilo(90,'-');   
                            printf("|    3		SKOL | APENAS O LIQUIDO -  300ml               R$%.2f         %-10d|\n", skol[0], skolDisponivel[0]); 
                            estilo(90,'-'); 
                            printf("|    4		SKOL | APENAS O LIQUIDO - 1L                   R$%.2f         %-10d|\n", skol[1],  skolDisponivel[1]); 
                            estilo(90,'-'); 
                            printf("|    5		BUDWEISER | LATA -  350ml                      R$%.2f         %-10d|\n", budweiser[0], budweiserDisponivel[0]);
                            estilo(90,'-');   
                            printf("|    6		BUDWEISER | VASILHAME INCLUSO -  330ml         R$%.2f         %-10d|\n", budweiser[1], budweiserDisponivel[1]);
                            estilo(90,'-');   
                            printf("|    7		ANTARCTICA | LATA -  473ml                     R$%.2f         %-10d|\n", antartica[0], antarticaDisponivel[0]); 
                            estilo(90,'-'); 
                            printf("|    8		ANTARCTICA | APENAS O LIQUIDO -  600ml         R$%.2f         %-10d|\n", antartica[1], antarticaDisponivel[1]); 
                            estilo(90,'-');   
                            printf("|    9		ORIGINAL  | LATA -  350ml                      R$%.2f         %-10d|\n", original[0], originalDisponivel[0]); 
                            estilo(90,'-'); 
                            printf("|    10		ORIGINAL | APENAS O LIQUIDO -  600ml           R$%.2f         %-10d|\n", original[1], originalDisponivel[1]); 
                            estilo(90,'='); 
                            printf("\nADICIONAR AO CARRINHO(INFORME O CODIGO):\n->");  
                            scanf("%d",&codigoMarca);                
                            while((codigoMarca<1)||(codigoMarca>10))
                            {
                                codigoNaoEncontrado();
                                printf("INFORME O CODIGO -> |1| A |10|\n->"); 
                                scanf("%d", &codigoMarca);
                            }
                            printf("INFORME A QUANTIDADE:\n->");
                            scanf("%d", &quantidBeer);
                            limpaTela();   
                    }
                    else if(opcao == ASPRESTIGIADAS)
                    {                            
                        estilo(90,'='); 
                        printf("|                              *AS PRESTIGIADAS*                                        |\n"); 
                        estilo(90,'='); 
                        estilo(90,'-');                                                                                         
                        printf("|  CODIGO	CERVEJA                                           PRECO      DISPONIVEL |\n"); 
                        estilo(90,'-');
                        printf("|    11		STELLA ARTOIS | VASILHAME INCLUSO -  275ml        R$%.2f      %-10d|\n", stellaArtois[0], stellaArtoisDisponivel[0] );
                        estilo(90,'-'); 
                        printf("|    12		STELLA ARTOIS - SEM GLUTEN - 330ml                R$%.2f      %-10d|\n", stellaArtois[1], stellaArtoisDisponivel[1] );
                        estilo(90,'-');  
                        printf("|    13		BECKS | LATA -  350ml                             R$%.2f      %-10d|\n", becks[0], becksDisponivel[0]); 
                        estilo(90,'-');
                        printf("|    14		BECKS | VASILHAME INCLUSO -  600ml                R$%.2f      %-10d|\n", becks[1], becksDisponivel[1]); 
                        estilo(90,'-'); 
                        printf("|    15		CORONA EXTRA | VASILHAME INCLUSO -  330ml         R$%.2f      %-10d|\n", corona[0], coronaDisponivel[0]);
                        estilo(90,'-');
                        printf("|    16		CORONITA | VASILHAME INCLUSO -  210ml             R$%.2f      %-10d|\n", corona[1], coronaDisponivel[1]);
                        estilo(90,'-'); 
                        printf("|    17		BOHEMIA | APENAS O LIQUIDO -  355ml               R$%.2f      %-10d|\n", bohemia[0], bohemiaDisponivel[0]); 
                        estilo(90,'-');
                        printf("|    18		BOHEMIA | APENAS O LIQUIDO -  600ml               R$%.2f      %-10d|\n", bohemia[1], bohemiaDisponivel[1]); 
                        estilo(90,'-');                       
                        printf("|    19		COLORADO APPIA |  LATA -  350ml                   R$%.2f      %-10d|\n", colorado[0], coloradoDisponivel[0]); 
                        estilo(90,'-');
                        printf("|    20		COLORADO APPIA | VASILHAME INCLUSO -  600ml       R$%.2f     %-10d|\n", colorado[1], coloradoDisponivel[1]); 
                        estilo(90,'=');
                        printf("\nADICIONAR AO CARRINHO (INFORME O CODIGO):\n-> ");    
                        scanf("%d",&codigoMarca);                         

                        while((codigoMarca<11)||(codigoMarca >20))
                        {   
                            codigoNaoEncontrado();
                            printf("INFORME O CODIGO -> |11| A |20|\n-> "); 
                            scanf("%d", &codigoMarca);
                        }
                        printf("INFORME A QUANTIDADE:\n-> ");
                        scanf("%d", &quantidBeer); 
                        limpaTela();  
                    } 
                    switch(codigoMarca)
                    {
                        case 1:
                            if(brahmaDisponivel[0] == 0){  
                                bebidaIndisponivel();  
                                break;
                            } 
                            if(quantidBeer > brahmaDisponivel[0]) {
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * brahma[0];                            
                            brahmaDisponivel[0]-=quantidBeer;
                            break;
                        case 2:
                            if(brahmaDisponivel[1] == 0){
                                bebidaIndisponivel();
                                break;  
                            }
                            if(quantidBeer > brahmaDisponivel[1]) {
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * brahma[1]; 
                            brahmaDisponivel[1]-=quantidBeer;
                            break;
                        case 3:
                            if(skolDisponivel[0] == 0){
                                bebidaIndisponivel();
                                break;  
                            }
                            if(quantidBeer > skolDisponivel[0]) {
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * skol[0];
                            skolDisponivel[0]-= quantidBeer;                     
                            break;
                        case 4:
                            if(skolDisponivel[1] == 0){
                                bebidaIndisponivel();
                                break;  
                            } 
                            if(quantidBeer > skolDisponivel[1]) {
                                quantidadeInvalida();
                                break; 
                            } 
                            precoCompra += quantidBeer * skol[1];
                            skolDisponivel[1]-=quantidBeer;                  
                            break;                                 
                        case 5:
                            if(budweiserDisponivel[0] == 0){
                                bebidaIndisponivel();
                                break;
                            }
                            if(quantidBeer > budweiserDisponivel[0]){
                                bebidaIndisponivel();
                                break; 
                            }
                            precoCompra += quantidBeer * budweiser[0];
                            budweiserDisponivel[0]-=quantidBeer;                      
                            break;                                 
                        case 6: 
                            if(budweiserDisponivel[1] == 0){
                                bebidaIndisponivel();
                                break;  
                            }
                            if(quantidBeer > budweiserDisponivel[1]){
                                quantidadeInvalida();
                                break; 
                            }  
                            precoCompra += quantidBeer * budweiser[1];
                            budweiserDisponivel[1]-=quantidBeer;                        
                            break;                                 
                        case 7:
                            if(antarticaDisponivel[0] == 0){
                                bebidaIndisponivel();
                                break;  
                            } 
                            if(quantidBeer > antarticaDisponivel[0]){
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * antartica[0];
                            antarticaDisponivel[0]-=quantidBeer;
                            break;                                 
                        case 8:
                            if(antarticaDisponivel[1] == 0){
                                bebidaIndisponivel();
                                break;  
                            }
                            if(quantidBeer > antarticaDisponivel[1]){
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * antartica[1];
                            antarticaDisponivel[1]-=quantidBeer;  
                            break; 
                        case 9:
                            if(originalDisponivel[0] == 0){
                                bebidaIndisponivel();
                                break;  
                            } 
                            if(quantidBeer > originalDisponivel[0]){
                                quantidadeInvalida();
                                break;
                            } 
                            precoCompra += quantidBeer * original[0];
                            originalDisponivel[0]-=quantidBeer;                         
                            break;                                 
                        case 10: 
                            if(originalDisponivel[1] == 0){
                                bebidaIndisponivel();
                                break;  
                            }
                            if(quantidBeer > originalDisponivel[1]){
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * original[1];
                            originalDisponivel[1]-=quantidBeer;                    
                            break;     
                        case 11:
                            if(stellaArtoisDisponivel[0] == 0){  
                                bebidaIndisponivel();
                                break;   
                            }
                            if(quantidBeer > stellaArtoisDisponivel[0]){
                                quantidadeInvalida();
                                break;
                            } 
                            precoCompra += quantidBeer * stellaArtois[0];                            
                            stellaArtoisDisponivel[0]-=quantidBeer;                      
                            break;
                        case 12:
                            if(stellaArtoisDisponivel[1] == 0){
                                bebidaIndisponivel();
                                break;  
                            }
                            if(quantidBeer > stellaArtoisDisponivel[1]){
                                quantidadeInvalida();
                                break;
                            } 
                            precoCompra += quantidBeer * stellaArtois[1]; 
                            stellaArtoisDisponivel[1]-=quantidBeer;                            
                            break;
                        case 13:
                            if(becksDisponivel[0] == 0){
                                bebidaIndisponivel();
                                break;                      
                            }
                            if(quantidBeer > becksDisponivel[0]){
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * becks[0];
                            becksDisponivel[0]-= quantidBeer; 
                            break;
                        case 14: 
                            if(becksDisponivel[1] == 0){
                                bebidaIndisponivel();
                                break;   
                            } 
                            if(quantidBeer > becksDisponivel[1]){
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * becks[1];
                            becksDisponivel[1]-=quantidBeer;                        
                            break;                                 
                        case 15: 
                            if(coronaDisponivel[0]  == 0){
                                bebidaIndisponivel();
                                break;   
                            }
                            if(quantidBeer > coronaDisponivel[0]){
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * corona[0];
                            coronaDisponivel[0]-=quantidBeer;                        
                            break;                                 
                        case 16: 
                            if(coronaDisponivel[1] == 0){
                                bebidaIndisponivel();
                                break;   
                            }
                            if(quantidBeer > coronaDisponivel[1]){
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * corona[1];
                            coronaDisponivel[1]-=quantidBeer;                           
                            break;                                 
                        case 17:
                            if(bohemiaDisponivel[0] == 0){
                                bebidaIndisponivel();
                                break;   
                            } 
                            if(quantidBeer > bohemiaDisponivel[0]){
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * bohemia[0];
                            bohemiaDisponivel[0]-=quantidBeer;                          
                            break;                                 
                        case 18: 
                            if(bohemiaDisponivel[1] == 0){
                                bebidaIndisponivel();
                                break;   
                            } 
                            if(quantidBeer > bohemiaDisponivel[1]){
                                quantidadeInvalida();
                                break;
                            }
                            precoCompra += quantidBeer * bohemia[1];
                            bohemiaDisponivel[1]-=quantidBeer;                          
                            break;                                 
                        case 19: 
                            if(coloradoDisponivel[0] == 0){
                                bebidaIndisponivel();
                                break;   
                            }
                            if(quantidBeer > coloradoDisponivel[0]){
                                quantidadeInvalida();
                                break;
                            }  
                            precoCompra += quantidBeer * colorado[0];
                            coloradoDisponivel[0]-=quantidBeer;                          
                            break;                                 
                        case 20: 
                            if(coloradoDisponivel[1] == 0){
                                bebidaIndisponivel();
                                break;   
                            }
                            if(quantidBeer > coloradoDisponivel[1]){
                                quantidadeInvalida();
                                break;
                            }   
                            precoCompra += quantidBeer * colorado[1];
                            coloradoDisponivel[1]-=quantidBeer;                        
                            break;        
                    }// FIM SWICTH CASE
                    estilo(90,'-');
                    printf("|SUBTOTAL: R$%-75.2f|\n", precoCompra);
                    estilo(90,'-');
                    estilo(90,'-');
                    printf("| ADICIONAR MAIS PRODUTOS -> |1|   FINALIZAR A COMPRA ->  |2|    CANCELAR COMPRA -> |0| |\n");
                    estilo(90,'-');
                    printf("-> ");
                    scanf("%d",&confirma);
                    limpaTela();       
                } while (confirma == 1); //CARDAPIO DE CERVEJAS
                if (confirma == 2)
                {
                    char respCadastro[] = "s";
                    limparBuffer();
                    estilo(43,'-');  
                    printf("| VOCE JA EH CADASTRADO?   [S]im [N]AO   |\n");
                    estilo(43,'-');
                    printf("-> ");
                    fgets(respCadastro, sizeof(respCadastro), stdin);                      
                    limpaTela();  
                      
                    if ((strcmp(respCadastro,"s")== 0))
                    {      
                        login();                
                    }
                    else
                    {
                        cadastroCliente();                   
                    }
                    int opPagamento;
                    estilo(87,'-');
                    printf("|     * PAGAMENTO ONLINE *    |   * PAGAMENTO NA ENTREGA *                           |\n");
                    estilo(87,'-');
                    estilo(87,'-');
                    printf("|   CARTAO DE CREDITO->|1|    |   DINHEIRO ->|2|   CARTAO DE CREDITO OU DEBITO ->|3| |\n");
                    estilo(87,'-');                               
                    printf("\nSELECIONAR FORMA DE PAGAMENTO: ");
                    scanf("%d",&opPagamento);
                    limpaTela();

                    if(opPagamento == 1)
                    {
                        cartaoCredito();                           
                    } 
                    else if (opPagamento == 2)
                    {
                        char respTroco[] = "s";
                        limparBuffer();
                        estilo(39,'-'); 
                        printf("|VALOR DO SEU PEDIDO: R$%-13.2f|\n", precoCompra);
                        estilo(39,'-');
                        printf("|VOCE PRECISA DE TROCO? [S]im [N]AO  |\n");
                        estilo(39,'-');        
                        fgets(respTroco, sizeof(respTroco), stdin);                             
                        
                        if ((strcmp(respTroco,"s")== 0))
                        {
                            int troco;
                            printf("|PRECISA DE TROCO PARA QUANTO ? R$");
                            scanf("%d", &troco);
                            limpaTela();
                        }                         
                    }
                    limpaTela();
                    identificacaoEntrega();
                    estilo(47,'-');
                    printf("|  PEDIDO N. xxxxxxxxx                       |\n"); 
                    estilo(47,'-'); 
                    estilo(47,'-');
                    printf("| TOTAL: R$ %-33.2f|\n", precoCompra);
                    estilo(47,'-');  
                    pedidoRealizado();
                    getchar();   
                } 
                else 
                {
                    limpaTela();
                    printf("\n"); 
                    estilo(23,'-');             
                    printf("| COMPRA CANCELADA!! |\n");                   
                    estilo(23,'-');
                    sleep(3);
                }               
            } //FIM  CARDAPIO DE CERVEJAS
            else if(codigoMenu == CADASTRO)
            {
                cadastroCliente();
            }
            else if(codigoMenu == CONTATO)
            {
                contatoBeerDelivery();
                sleep(3);       
            }
            else
            {
                printf("\nBYE BYE!!\n");
            }
    } while (codigoMenu != 0); 
    return 0;
} 
