#include <stdio.h>

int main(void){
    char input[255];
    while(1){
        printf("Digite um comando:\n");
        fgets(input, 255, stdin);
        printf("Comando digitado  \"%s\"\n", input);
    }
    return 0;
}