#include "string_lib.h"

#include <stdio.h>
#include <stdlib.h>

String* string_create(char* data, int length) {
    String* str = malloc(sizeof(String));

    str->data = malloc(length * sizeof(char));

    for (int i = 0; i < length; i++) {
        str->data[i] = data[i];
    }

    str->length = length;

    return str;
}

void string_destroy(String* str) {
    free(str->data);
    free(str);
}

void string_print(String* str) {
    for (int i = 0; i < str->length; i++) {
        printf("%c", str->data[i]);
    }
    printf("\n");
}

String* string_reverse(String* str){
    String* strReversa = string_create("",str->length);
    for(int i = 0; i<str->length; i++){
        strReversa->data[i] = str->data[(str->length-1)-i]; 
    }
    return strReversa;
};

int string_len(String* str){
    return str->length;
};