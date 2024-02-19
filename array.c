#include <stdio.h>
#include <array.h>


Array struct {
    int* data;
    int size;

};

Array * array_create(int size){
    Array array =
};
void array_destroy(Array*);
int array_get(Array*);
void array_set(Array* array, int pos);
int array_size(Array*);
void array_print(Array*);