#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int op, n = 0;

    while (op != 4){
    
        system("clear");

        printf("                          Contador: %d\n", n);
        printf("------------------------------------------------------------------\n");
        printf("[1] - Resetar | [2] - Incrementar | [3] - Decrementar | [4] - Sair\n");
        printf("Digite uma opcao: ");

        scanf("%d", &op);

        if (op == 1){
            n = 0;
        } else if (op == 2){
            n++;
        } else if (op == 3){
            n--;
        } else if (op == 4){
            printf("Saindo...\n");
        } else {
            system("clear");

            printf("Opcao invalida, tente novamente apos alguns segundos...\n");
            printf("Voce digitou: %d...\n", op);
            sleep(5);
        }
    }
    
    return 0;
}