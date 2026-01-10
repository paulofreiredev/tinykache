#ifndef TYPES_H
#define TYPES_H

#define DEFAULT_KEY_SIZE 60
#define DEFAULT_ELEMENT_SIZE 1000

typedef struct {
    char *key;
    char *value;
    int ttl;
} CacheItem;

typedef struct {
    CacheItem  **items;
    int length;
    int capacity;
} CacheMap;

#endif