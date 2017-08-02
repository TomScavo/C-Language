#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void){
    printf("char1=");
    char *ch1=get_string();
    
    printf("char2=");
    char *ch2=get_string();
    
    if(ch1!=NULL&&ch2!=NULL){
        
        if(strcmp(ch1,ch2)==0){
        
            printf("same.\n");
        }
        else{
            printf("diffent:)\n");
       }
    }
    
    
}