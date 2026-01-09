#include <stdio.h>
#include <stdlib.h>
#include "utils/hash_map.h"

#define DEFAULT_POOL_SIZE 1000

void main_loop(){
    printf("TinyKache server is running...\n");
    char *value = malloc(255 * sizeof(char));
    int ttl = 0;
    //TODO estudar fgets não fgts
    scanf("PUT %s\n", value);
    scanf("TTL %d\n", &ttl);
    Entry e = {"abcd", value, ttl };
    put_item(e);
     printf("key: %s -> value: %s. TTL: %d. Inserted with ID: %s\n", e.key, e.value, e.ttl, "abcd");
}

int main(void){
    Entry e1 = { "user-name", "Paulo Higor", 3600 };
    char *key = put_item(e1);
    Entry e2 = get_item("c269ddad-d4a7-4ad9-af59-a53e9f6b842b");
    printf("key: %s -> value: %s. TTL: %d. Inserted with ID: %s\n", e1.key, e1.value, e1.ttl, key);
    printf("Found entry -> key: %s -> value: %s. TTL: %d\n", e2.key, e2.value, e2.ttl);
    main_loop();
}