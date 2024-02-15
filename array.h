#ifndef ARRAY_H
#define ARRAY_H
typedef struct Array Array; //tipo opaco para o encapsulamento de nível de acesso restrito apenas para a propria TAD

Array * array_create(int);
void array_destroy(Array*);
int array_get(Array*);
void array_set(Array* array, int pos);
int array_size(Array*);
void array_print(Array*);

#endif