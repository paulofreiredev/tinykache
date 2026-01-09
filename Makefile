build:
	gcc main.c utils/hash_map.c -l uuid -o bin/tinykache
build-prod:
	gcc -Wall -Wextra -Werror main.c utils/hash_map.c -l uuid -o bin/tinykache