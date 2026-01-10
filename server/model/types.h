#ifndef TYPES_H
#define TYPES_H

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