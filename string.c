#include <cs50.h>
#include <stdio.h>
#include <string.h>

int  main(void){
    printf("please enter something: ");
    
     char *                                                                                                          s=get_string();
     if(s!=NULL)
     {
        printf("%s\n",s);
     }
}