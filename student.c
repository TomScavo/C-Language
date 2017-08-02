#include <cs50.h>
#include <stdio.h>
#include "student.h"
#define STUDENT 3

int main(){
    student Student[STUDENT];
    
    for(int i=0;i<STUDENT;i++){
         printf("name: ");
         char *name=get_string();
         printf("dorm: ");
         char *dorm =get_string();
         
         Student[i].name=name;
         Student[i].dorm=dorm;
         }
         
    for(int i=0;i<STUDENT;i++){
        printf("%s is in %s\n",Student[i].name,Student[i].dorm);
    }
         
    
}