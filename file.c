#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
#define STUDENT 3

int main()
{
    student Student[STUDENT];
    
    for(int i=0;i<STUDENT;i++)
    {
         printf("name: ");
         Student[i].name=get_string();
         printf("dorm: ");
         Student[i].dorm=get_string();
    }

FILE *file = fopen("student.csv", "w");

    for(int i=0; i<STUDENT; i++)
    {
        fprintf(file,"%s is in %s\n",Student[i].name,Student[i].dorm);
    }
    
    fclose(file);
    
}




