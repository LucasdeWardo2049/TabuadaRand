#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void adicao(int num1,int j,int resp,int ale,float soma);
void subtracao(int num1,int j,int resp,int ale,float sub);
void multiplicao(int num1,int j,int resp,int ale,float mult);
void divisao(int num1,int j,int resp,int ale,float div);

int main()
{

   float num1,j,resp,ale,soma,sub,mult,div;
   char op;
   setlocale(LC_ALL,"Portuguese");

    do{
    system("cls");
    printf("\n\t\t-----------------------------------");
    printf("\n\t\t>>>>>>>>>>>GAME DE TABUADA>>>>>>>>>>");
    printf("\n\t\t-----------------------------------");
    printf("\n\t\t[1] Adição");
    printf("\n\t\t[2] Subtração");
    printf("\n\t\t[3] Multiplicação");
    printf("\n\t\t[4] divisao\n");
    printf("\n\t\t[0] para sair do jogo\n");

    printf("\nDigite um numero que voce sabe a tabuada: ");
    scanf("%f", &num1);
    printf("\nAgora eu escolho uma operacao: ");
    scanf("%s",&op);


    switch (op) {
      case '1':
        adicao(num1,j,resp,ale,soma);
        system("cls");
        printf("\n\n\t\tDeseja continuar? digite [s] para sim ou [n] para não: ");
        setbuf(stdin,NULL);
        scanf("%c", &op);

        break;
        case '2':
        srand(time(NULL));
        subtracao(num1,j,resp,ale,sub);
        system("cls");
        printf("\n\n\t\tDeseja continuar? digite [s] para sim ou [n] para não: ");
        setbuf(stdin,NULL);
        scanf("%c", &op);

        break;
        case '3':
        multiplicao(num1,j,resp,ale,mult);
        system("cls");
        printf("\n\n\t\tDeseja continuar? digite [s] para sim ou [n] para não: ");
        setbuf(stdin,NULL);
        scanf("%c", &op);

        break;
        case '4':
        divisao(num1,j,resp,ale,div);
        system("cls");
        printf("\n\n\t\tDeseja continuar? digite [s] para sim ou [n] para não: ");
        setbuf(stdin,NULL);
        scanf("%c", &op);

        break;

        case '0':
        printf("FIM DO GAME");
        return 0;

      default:
        printf("tecla errada ");
    }
    }

    while(op == 's' || op == 'S' );
    return 0;
}
   void adicao(int num1,int j,int resp,int ale,float soma)
{
   srand(time(NULL));
   for(j=1;j<=5;j++)
   {
     system("cls");
     printf("Qual o valor de %d mais %d = ? \n", ale, num1);
     scanf("%d",&resp);
     soma = ale + num1;
     ale = (rand() %9)+ 1;
     if (resp == soma){
         printf("resposta correta \n\n");
         system("pause");
     }
     else if (resp != ale + num1){
        printf("Resposta falsa \n");
        system("pause");

     }
}
}
   void subtracao(int num1,int j,int resp,int ale,float sub)
{

   srand(time(NULL));

   for(j=1;j<=5;j++)
   {
     srand(time(NULL));
     ale = (rand() %10)+num1 ;
     srand(time(NULL));
     system("cls");
     printf("Qual o valor de %d menos %d = ? \n",ale , num1);
     scanf("%d",&resp);
     sub = ale - num1;
     if (resp == sub){
         printf("resposta correta \n\n");
         system("pause");
     }
     else if (resp != ale + num1){
        printf("Resposta errada\n\ntente outra pergunta\n\n");
        system("pause");
     }
}
}
void multiplicao(int num1,int j,int resp,int ale,float mult)
{
   srand(time(NULL));
   for(j=1;j<=5;j++)
   {
     system("cls");
     printf("Qual o valor de %d vezes %d = ? \n",ale , num1);
     scanf("%d",&resp);
     mult = ale * num1;
     ale = (rand()%num1);
     if (resp == mult){
         printf("resposta correta \n\n");
         system("pause");
     }
     else if (resp != ale * num1){
        printf("Resposta falsa \n");
        system("pause");

     }
}
}
void divisao(int num1,int j,int resp,int ale,float div)
{
   srand(time(NULL));
   for(j=1;j<=6;j++)
   {
     system("cls");
     ale = (rand() %num1+1);
     printf("Qual o valor de %d dividido por %d = ? \n",ale , num1);
     scanf("%d",&resp);
     div = ale / num1;

     if (resp == div){
         printf("resposta correta \n\n");
         system("pause");
     }
     else if (resp != ale * num1){
        printf("Resposta falsa \n");
        system("pause");

     }
}
}


