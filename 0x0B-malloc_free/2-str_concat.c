#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2){
    char* ch;
    if(s1==NULL && s2==NULL){
        return NULL;
    }if(s1!=NULL && s2!=NULL){
        ch=malloc(sizeof(s1)+sizeof(s2));
        if(ch==NULL){
            return NULL;
        }else{
            ch=strcat(s1,s2);
        }
    }elif(s1!=NULL && S2==NULL){
        ch=malloc(sizeof(s1));
        if(ch==NULL){
            return NULL;
        }else{
            ch=s1;
        }
    }
    return ch;
}
