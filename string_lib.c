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
}

int string_len(String* str){
    return str->length;
}

void string_append(String *str1, String* str2){
    String* str_appendada = string_create("",str1->length+str2->length);
    printf("TAMANHO DA STRING APENDADA%d\n", str_appendada->length);
    for(int i = 0; i < str_appendada->length-1; i++){
        if((i+1)<=str1->length){
            printf("%c\n",str1->data[i]); 
            str_appendada->data[i] = str1->data[i];
            }
        else{
            printf("VALOR %c NA POSICAO %d\n",str2->data[i-(str2->length)],i-(str2->length)); 
            str_appendada->data[i] = str2->data[i-(str2->length)];
            }
    }
    
    string_destroy(str1);

    str1 = str_appendada;
    str1->data = str_appendada->data;
    printf("TAMANHO DA STR1 APOS O APPEND%d\n", str1->length);
}
