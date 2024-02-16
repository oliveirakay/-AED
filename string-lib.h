#ifndef STRING-LIB.H
#define STRING-LIB.H

typedef sctruct String Sting;

String* create_string(char* content, int len);
void string_destroy(String* str);
void string_print(String str);
String* string_reverse(String str); 
void string append(String* str1, String str2);

#endif