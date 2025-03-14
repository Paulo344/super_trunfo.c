#include<stdio.h>

int main(){
    char estado[10];
    char NomedaCidade[50];
    int CodigoDaCarta;
    int população ;
    float area;
    float PIB;
    int pontos;
    int carta;
    float DensidadePopulacional;
    float PIBperCapita;
    //DEFINICAO DAS VARIAVEIS//

 printf("Digite o estado:\n");
 scanf("%s",&estado);

 printf("Digite o codigo da carta:\n");
 scanf("%d",&CodigoDaCarta);

 printf("Digite qual a populacão do seu estado:\n");
 scanf("%d",&população);

 printf("Digite a area de seu estado :\n");
 scanf("%f",&area);

 printf("Digite o PIB do seu estado:\n");
 scanf("%f",&PIB);

 printf("Digite o numero de pontos turisticos do seu estado\n");
 scanf("%d",pontos);

 printf("Qual o numero da sua carta\n");
 scanf("%d",carta);

 PIBperCapita =(float)(PIB/população);
 DensidadePopulacional=(float)(população/area);

     //PEDIDO E LEITURA DOS DADOS//

 printf("Sua carta e :%d\n",carta);
 printf("O numero de pontos turisticos do seu estado e :%d\n",pontos);
 printf("O PIB do seu estado e:%f\n",PIB);
 printf("O PIB por pessoa e de:%f\n",PIBperCapita);
 printf("A area do seu estado e:%f\n",area);
 printf("Sua população e de :%d\n",população);
 printf("A densidade populacional da sua cidade e de: %f\n",DensidadePopulacional);
 printf("Seu codigo e :%d\n",CodigoDaCarta);
 printf("Seu estado e :%s\n",estado);
 return 0;
    //SAIDA DE DADOS QUE O USUARIO FORNECEU//
    
}