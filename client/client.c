#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char input[300];
    char command[8];
    char key[37];
    char item[257];
    int ttl = 0;

    while (1) {
        printf("Digite um comando:\n");

        if (!fgets(input, sizeof(input), stdin)) {
            break;
        }

        if (sscanf(input, "%7s", command) != 1) {
            printf("Comando inválido\n");
            continue;
        }

        if (strcmp(command, "PUT") == 0) {
            if (sscanf(input, "PUT \"%127[^\"]\" -t %d", item, &ttl) == 2) {
                printf("CMD -> PUT | ITEM -> \"%s\" | TTL -> %d\n", item, ttl);
            } else {
                printf("Formato inválido para PUT\n");
            }
        }
        else if (strcmp(command, "GET") == 0 || strcmp(command, "DEL") == 0) {
            if (sscanf(input, "%*s -k \"%37[^\"]\"", key) == 1) {
                printf("CMD -> %s | KEY -> \"%s\"\n", command, key);
            } else {
                printf("Formato inválido para %s\n", command);
            }
        }
        else {
            printf("Comando desconhecido: %s\n", command);
        }
    }

    return 0;
}
