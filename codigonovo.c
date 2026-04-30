#include <stdio.h>

int interface(){

    int resposta;

    printf("\nFaca escolha do que quer fazer:\n");
    printf("--------------------------\n");
    printf("1 - Registrar notas\n2 - Medias\n3 - Situacao\n4 - Exibir Tudo\n5 - Calculo de Derivadas\n6 - Sair do Programa\n");
    printf("--------------------------");
    printf("\n");
    scanf("%d", &resposta);

    return resposta;

}

void derivada(){
        float a, x, b, c, f, fd;

        printf("Agora insira os valores da variaveis: \n"); 
        printf("\nValor de a: ");
        scanf("%f", &a);
        printf("\nValor de x: ");
        scanf("%f", &x);
        printf("\nValor de b: ");
        scanf("%f", &b);
        printf("\nValor de c: ");
        scanf("%f", &c);

        f = a*(x*x) + b*x + c;
        fd = 2*a*x + b;

        printf("f(x) = %.2f\n", f);
        printf("f'(x) = %.2f\n", fd);
        

}


int main(){

    int opcao = 0;
    float nota1, nota2, nota3, nota4;
    nota1 = -1;
    nota2 = -1;
    nota3 = -1;
    nota4 = -1;
    float media = -1;

    while (opcao != 6){
        opcao = interface();


        switch(opcao){
            case 1:

            if (nota1 != -1 && nota2 != -1 && nota3 != -1 && nota4 != -1){
                printf("Notas ja foram registradas para esse aluno, nao podem ser mudadas.\n");
                break;
            }


            printf("Primeiro Bimestre (0-10): ");
            scanf("%f", &nota1);
            printf("Segundo Bimestre (0-10): ");
            scanf("%f", &nota2);
            printf("Terceiro Bimestre (0-10): ");
            scanf("%f", &nota3);
            printf("Quarto Bimestre (0-10): ");
            scanf("%f", &nota4);
            
            if ((nota1 >= 0 && nota1 <= 10) || (nota2 >= 0 && nota2 <= 10) || (nota3 >= 0 && nota3 <= 10) || (nota4 >= 0 && nota4 <= 10)){
                printf("Notas registradas.\n");
            }
            else{
                printf("Houve algum erro registrando as notas, escolha 1 novamente para reinserir elas.\n");
                nota1 = -1;
                nota2 = -1;
                nota3 = -1;
                nota4 = -1;           
            }
            
            break;

            case 2:

            if (nota1 == -1 && nota2 == -1 && nota3 == -1 && nota4 == -1 && media == -1){
                printf("Por favor, registre suas notas primeiro.\n");
                break;
            }

            media = (nota1 + nota2 + nota3 + nota4) / 4;
            printf("A media desse aluno e de %.2f.\n", media);

            break;

            case 3:

            media = (nota1 + nota2 + nota3 + nota4) / 4;


            if (nota1 == -1 && nota2 == -1 && nota3 == -1 && nota4 == -1 && media == -1){
                printf("Por favor, registre suas notas primeiro.\n");
                break;
            }

            if (media >= 7.0){
                printf("Aluno aprovado.\n");
            }
            else if (media >= 5.0){
                printf("Aluno em Recuperacao.\n");
            }
            else{
                printf("Aluno Reprovado.\n");
            }
                

            break;

            case 4:

            media = (nota1 + nota2 + nota3 + nota4) / 4;

            if (nota1 == -1 && nota2 == -1 && nota3 == -1 && nota4 == -1 && media == -1){
                printf("Por favor, registre suas notas primeiro.\n");
                break;
            }

            printf("\nPrimeiro Bimestre (0-10): %.2f", nota1);
            printf("\nSegundo Bimestre (0-10): %.2f", nota2);
            printf("\nTerceiro Bimestre (0-10): %.2f", nota3);
            printf("\nQuarto Bimestre (0-10): %.2f", nota4);
            
            if (media >= 7.0){
                printf("\nAluno aprovado.\n");
            }
            else if (media >= 5.0){
                printf("\nAluno em Recuperacao.\n");
            }
            else{
                printf("\nAluno Reprovado.\n");
            }
            break;

            case 5:

            derivada();
            break;

            case 6:

            printf("\nDesligando Sistema.\n");
            break;

            default:

            printf("\nDigite uma das opcoes dadas.\n");
            break;
        }
        
    }
    return 0;   
}