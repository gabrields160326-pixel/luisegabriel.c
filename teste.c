#include <stdio.h>

int main(){
int i;
int valor[] = {10, 20, 32, 421, 21};
int valor2[] = {5, 15, 25, 35, 45};

    printf("\n");

    for(i=0; i<5; i++){
        printf("%d\n", valor[i]);
    }

    printf("\n");

    for(i = 0; i<5; i++){
        printf("%d\n", valor2[i]);
    }

    printf("\n");

    return 0;
}
