
#include <stdio.h>


int main(){
 char nome_do_pais1[20],nome_do_pais2[20];
 int populacao1, ponto_turistico1,opcao,populacao2,ponto_turistico2,atributo1;
 int Atributo2,resultado1,resultado2,maior,menor;
 float area1,PIB1,desindade1,area2,PIB2,desindade2,percapta1,percapta2,soma1,soma2;

 printf("Menu Principal: \n");
 printf("1. Ver as Regras do jogo: \n");
     
 printf("2. Iniciar o Jogo \n");
 printf("Cadastre os Atributos do Jogo\n");
 printf("3.Sair do Jogo\n");
 printf("Escolha a opção: (1- Ver as regras * 2- Iniciar o Jogo * 3- Sair )\n");
 scanf("%d",&opcao);

 switch (opcao)
 {
 case 1:
    printf("Regra 1: Escolha uma opçao para comecar a jogar: \n");
    printf("Para Começar a jogo insira os campos das cartas de acordo com o que é pedido: \n!");
    printf("Insira o  nome de um pais, preenchendo as caracteristicas das cidades: \n!");
    printf("Após a escolha dos atributos para comparar as cartas: \n");
    break;
 case 2:
    printf("**Iniciar o Jogo**\n");
    printf("Carta 01\n");
    printf("Qual país: \n");
    scanf(" %s",&nome_do_pais1);      
   printf("Qual é a população: \n");
   scanf("%d",&populacao1);
   printf("Qual a Área: \n");
   scanf("%f",&area1);
   printf("Qual é o PIB: \n");
   scanf("%f",&PIB1);
   printf("Pontos turisticos: \n");
   scanf("%d",&ponto_turistico1);

     printf("Carta 02\n");
    printf("Qual país: \n");
    scanf(" %s",&nome_do_pais2);
     printf("Qual e a população: \n");
     scanf("%d",&populacao2);
     printf("Qual a Área : \n");
     scanf("%f",&area2);
     printf("Qual PIB: \n");
     scanf("%f",&PIB2);
    printf("Pontos turisticos: \n");
    scanf("%d",&ponto_turistico2);
    percapta1=PIB1/populacao1;                
    percapta2=PIB2/populacao2;
    desindade1=populacao1/area1;            
    desindade2=populacao2/area2;
        

        printf("Escolha um atributo: 1.Populaçao ,2.Area ,3.PIB, 4.Densidade Demografica , 5.Ponto Turistico \n");
        scanf("%d",&atributo1);
                                        
     switch (atributo1)
        {  
        case 1:   
          resultado1 = (populacao1 > populacao2)? 1:0;  
         break;            
      case 2:  
          resultado1 = (area1 > area2)? 1:0; 
           break;             
        case 3:
            resultado1 = (percapta1 > percapta2)? 1:0; 
                 break;            
        case 4:
            resultado1 = (desindade1 < desindade2)? 1:0;
          break;
          
         case 5:  
         resultado2 = (ponto_turistico1 > ponto_turistico2)? 1:0; 
             break;

         default:
           printf("Opção invalida.Tente novamente.\n");
      }
           
    printf("Escolha um atributo: 1.População ,2.Area ,3.PIB, 4.Densidade Demografica , 5.Ponto Turistico \n");
        scanf("%d",&Atributo2);

        if (atributo1==Atributo2)
        {
            printf("Voce escolheu o mesmo Atributo!!");
             break;

        } else{ 
        
            switch (Atributo2)

            {
                case 1:   
              
                resultado2 = (populacao1 > populacao2)? 1:0; 
                    
               
                
                break;
                
                case 2:  
              
                resultado2=(area1 > area2)? 1:0;
                 
                break;             
                
                    
                
                case 3:
                   
                    
                    resultado2 = (percapta1 > percapta2)? 1:0;
                
                      break;             
              
        
               case 4:
                    
                    resultado2 = (desindade1 < desindade2)? 1:0;
                
                break;
                case 5:  
                
                resultado2 = (ponto_turistico1 > ponto_turistico2)? 1:0;  
                              
                
                   
                break;
        
                default:
                printf("Opção invalida.Tente novamente.\n");
            } 


    
    };
   

    printf("Nome do País: %s  %s \n",nome_do_pais1,nome_do_pais2);
    printf("CARTA01\n");
    printf("Populacao: %d \n",populacao1);
    printf("Area: %.2f \n",area1);
    printf("PIB: %.2f \n",percapta1);
    printf("Desidade: %.2f \n",desindade1);
    printf("Pontos Turisticos: %d \n",ponto_turistico1);
    soma1=populacao1+area1+percapta1+desindade1+ponto_turistico1;
    printf("Soma dos atributos: %.2f \n",soma1);
    
    printf("########\n");
    printf("CARTA02\n");
    printf("Populacao: %d \n",populacao2);
    printf("Area: %.2f \n",area2);
    printf("PIB: %.2f \n",percapta2);
    printf("Desidade: %.2f \n",desindade2);
    printf("Pontos Turisticos: %d \n",ponto_turistico2);
    soma2=populacao2+area2+percapta2+desindade2+ponto_turistico2;
    printf("Soma dos atributos: %.2f \n",soma2);

    if (resultado1 > resultado2){  
        
         if (atributo1 ==1)
           {
            printf("Voce escolheu o atributo CARTA01: populaçao!!\n");

           }else if (atributo1 ==2)
           {
            printf("Voce escolheu o atributo CARTA01: area da cidade !!\n");
           }else if (atributo1 ==3)
           {
            printf("Voce escolheu atributo CARTA01: Renda percapta !!\n");
           } else if (atributo1 ==4){
            printf("Voce escolheu o atributo CARTA01:: Densidade Demografica !!\n");
           } else if (atributo1 ==5)
           {
            printf("Voce escolheu o atributo CARTA01: ponto turistico !!\n");
           }

           if (Atributo2 ==1)
           {
            printf("Voce escolheu o atributo CARTA02: populaçao!!\n");

           }else if (Atributo2 ==2)
           {
            printf("Voce escolheu o atributo CARTA02: area da cidade !!\n");
           }else if (Atributo2 ==3)
           {
            printf("Voce escolheu atributo CARTA02: Renda percapta !!\n");
           } else if (Atributo2 ==4){
            printf("Voce escolheu o atributo CARTA02: Densidade Demografica !!\n");
           } else if (Atributo2 ==5)
           {
            printf("Voce escolheu o atributo CARTA02: ponto turistico !!\n");
           }

         
         
            printf("#####CARTA 01 FOI A VENCEDORA######\n");

    }else if (resultado1 != resultado2) {
        if (atributo1 ==1)
        {
         printf("Voce escolheu o atributo CARTA01: populaçao!!\n");

        }else if (atributo1 ==2)
        {
         printf("Voce escolheu o atributo CARTA01: area da cidade !!\n");
        }else if (atributo1 ==3)
        {
         printf("Voce escolheu atributo CARTA01: Renda percapta !!\n");
        } else if (atributo1 ==4){
         printf("Voce escolheu o atributo CARTA01:: Densidade Demografica !!\n");
        } else if (atributo1 ==5)
        {
         printf("Voce escolheu o atributo CARTA01: ponto turistico !!\n");
        }

        if (Atributo2 ==1)
        {
         printf("Voce escolheu o atributo CARTA02: populaçao!!\n");

        }else if (Atributo2 ==2)
        {
         printf("Voce escolheu o atributo CARTA02: area da cidade !!\n");
        }else if (Atributo2 ==3)
        {
         printf("Voce escolheu atributo CARTA02: Renda percapta !!\n");
        } else if (Atributo2 ==4){
         printf("Voce escolheu o atributo CARTA02: Densidade Demografica !!\n");
        } else if (Atributo2 ==5)
        {
         printf("Voce escolheu o atributo CARTA02: ponto turistico !!\n");
        }     

        
        printf("##O OJOGO EMPATOU##\n");

    }else if (resultado2 > resultado1) {
        if (atributo1 ==1)
        {
         printf("Voce escolheu o atributo CARTA01: populaçao!!\n");

        }else if (atributo1 ==2)
        {
         printf("Voce escolheu o atributo CARTA01: area da cidade !!\n");
        }else if (atributo1 ==3)
        {
         printf("Voce escolheu atributo CARTA01: Renda percapta !!\n");
        } else if (atributo1 ==4){
         printf("Voce escolheu o atributo CARTA01:: Densidade Demografica !!\n");
        } else if (atributo1 ==5)
        {
         printf("Voce escolheu o atributo CARTA01: ponto turistico !!\n");
        }

        if (Atributo2 ==1)
        {
         printf("Voce escolheu o atributo CARTA02: populaçao!!\n");

        }else if (Atributo2 ==2)
        {
         printf("Voce escolheu o atributo CARTA02: area da cidade !!\n");
        }else if (Atributo2 ==3)
        {
         printf("Voce escolheu atributo CARTA02: Renda percapta !!\n");
        } else if (Atributo2 ==4){
         printf("Voce escolheu o atributo CARTA02: Densidade Demografica !!\n");
        } else if (Atributo2 ==5)
        {
         printf("Voce escolheu o atributo CARTA02: ponto turistico !!\n");
        }

      
      
         printf("##CARTA 02 FOI A VENCEDORA###\n");


           
    }else{

    printf("Voce perdeu!!\n");
          };
                             
case 3:
         printf("Saindo...\n");
        
 break;
default:
printf("Opção invalida.Tente novamente!\n");
 



}



        
}
