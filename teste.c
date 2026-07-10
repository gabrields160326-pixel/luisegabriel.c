#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "Portuguese");

int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

if(numero1 > numero2){
    printf("O numero %d é maior que o numero %d\n", numero1, numero2);
} else if(numero2 > numero1) {
    printf("O numero %d é maior que o numero %d\n", numero2, numero1);
} else {
   printf("Os numeros sao iguais.\n");
}
    printf("Fim do programa.");

return 0;
}