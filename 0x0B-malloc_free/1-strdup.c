/*
* Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

* Prototype: char *_strdup(char *str);
* The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
* Returns NULL if str = NULL
* On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available**
*
*/

#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str){
    char * ch=malloc(sizeof(str)*2);
    if(ch==NULL){
        return NULL;
    }else{
        ch=str;
        for(int i=0;i<strlen(str);i++){
            ch[strlen(str)+i]=str[i];
        }
    }
    //free(ch);
    return ch;
}