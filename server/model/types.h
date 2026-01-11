#ifndef TYPES_H
#define TYPES_H
#define OUT_OF_MEMORY_ERROR_CODE 137

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