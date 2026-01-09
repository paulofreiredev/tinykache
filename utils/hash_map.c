#include <uuid/uuid.h>
#include <stdlib.h>
#include "hash_map.h"

char* put_item(Entry value){
    uuid_t id;
    char *uuid_str = malloc(37 * sizeof(char));
    uuid_generate(id);
    uuid_unparse_lower(id, uuid_str);
    return uuid_str;
}

Entry get_item(char *value){
    Entry e = { "3e78c9c9-f5dc-42d2-8596-0288d182f319", "{ \"name\": \"Paulo\", \"age\": 30 }", 3600 };
    return e;
}

int exists(char *value){
    return 1;
}