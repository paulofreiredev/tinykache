#ifndef TYPES_H
#define TYPES_H

typedef struct {
    char *key;
    char *value;
    int ttl;
} Entry;

#endif