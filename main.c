#include <stdio.h>
#include "string_lib.h"

int main(void) {
   
    // //PONTEIROS E ARRAYS
    // char sexo[] = "abc";
    // char* sex = sexo;
    
    // printf("Conteudo do ponteiro %p\n", sex);
    // printf("Conteudo do endereco apontado pelo ponteiro %c\n", *(sex));
    // printf("Conteudo do endereco apontado pelo ponteiro %c\n", *(sex+1));
    // printf("Conteudo do endereco apontado pelo ponteiro %c\n", *(sex+2));
    // printf("Endereco do ponteiro %p\n", &sex);

    // //PONTEIROS E ESTRUTURAS
    // struct Point{
    //     int x;
    //     int y;
    // };
    
    // struct Point p = {10,11};
    // struct Point* q = &p;

    // printf("p.x:%d\n",p.x);
    // printf("p.y:%d\n",p.y);
    // printf("q->x:%d\n",q->x);
    // printf("q->y:%d\n",q->y);
    // 
    String* str = string_create("abc", 3); 
    String* reversa = string_reverse(str);
    printf("-----------------------------\n-----------------------------\n");
    printf("reversa: ");
    string_print(reversa);
    printf("orgirinal: ");
    string_print(str);
    
    printf("size original %d\n", str->length);
    printf("reverse size %d\n", reversa->length);

    string_print(reversa);


   
    string_destroy(str);
    string_destroy(reversa);
    

    return 0;



}
