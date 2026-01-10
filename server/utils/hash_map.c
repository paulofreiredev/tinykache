#include "../model/types.h"
#include "hash_map.h"
#include <uuid/uuid.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define DEFAULT_CAPACITY 999983

CacheMap *hash_map(){
    CacheMap *map = malloc(sizeof(CacheMap));
    if (!map) return NULL;    
    map->capacity = DEFAULT_CAPACITY;
    map->length = 0;
    map->items = calloc(map->capacity, sizeof(CacheItem));
    return map;
}

int calculate_hash(char *key){
    unsigned long i = 0;
    for(size_t j = 0; j < strlen(key); j ++){
        char at = key[j];
        if(at == '\0'){
            break;
        }
        i = i * 31 + (unsigned char)at;
    }
    return i % DEFAULT_CAPACITY;
}

char* put_item(CacheMap *map, CacheItem *item){
    uuid_t id;
    char uuid_str[37];
    uuid_generate(id);
    uuid_unparse_lower(id, uuid_str);
    item->key = strdup(uuid_str);
    if (!item->key) return NULL;
    int hash = calculate_hash(item->key);
    map->items[hash] = item;
    return item->key;
}

CacheItem *get_item(CacheMap *map, char *key){
    int hash = calculate_hash(key);
    CacheItem *e = map->items[hash];
    return e;
}