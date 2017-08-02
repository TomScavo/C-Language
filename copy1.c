#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (){
    printf("Enter string1 please:)");
    char *string1 =get_string();
    
    if(string1==NULL){
        return(1);
    }
    char *string2=malloc(strlen(string1)*sizeof(char));
    
    for(int i=0,n=strlen(string1);i<n;i++){
       *(string2+i)=*(string1+i);
    }
    *string2 =toupper(*string2);
    printf("string1 is:%s\n",string1);
    printf("string2 is:%s\n",string2);
     
    free(string2);
    return(0);
}