#include <stdio.h>
#include <stdlib.h>
#include "utils/hash_map.h"
#include "model/types.h"

#define DEFAULT_POOL_SIZE 1000

int main(void){
    CacheItem e1 = { NULL, "Paulo Higor", 3600 };
    CacheMap *map = hash_map();
    char *key = put_item(map, &e1);
    CacheItem *e2 = get_item(map, key);
    printf("value: %s. TTL: %d. Inserted with key: %s\n",  e1.value, e1.ttl, e1.key);
    printf("Found entry -> key: %s -> value: %s. TTL: %d\n", e2->key, e2->value, e2->ttl);
}