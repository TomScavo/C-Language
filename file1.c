#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main (){
    
    FILE *file=fopen("students3.csv","w");
    for(int i=0;i<3;i++){
        printf("please enter name: ");
        char *name=get_string();
        printf("please enter dorm: ");
        char *dorm=get_string();
        fprintf(file,"%s is in %s\n",name,dorm);
    }
   fclose(file);
}