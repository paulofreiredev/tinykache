#include "../model/types.h"
#ifndef HASH_MAP_H
#define HASH_MAP_H

char *put_item(CacheMap *map, CacheItem *item);
CacheMap *hash_map();
int calculate_hash(char *key);
CacheItem *get_item(CacheMap *map, char *key);
void delete_item(CacheMap *map, char *key);

#endif