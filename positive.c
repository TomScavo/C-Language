#include <stdio.h>
#include <cs50.h>

int get_positive_int();

int main(){
    printf("positive please: ");
    int i=get_positive_int();
    printf("positive number is %i\n",i);
}
int get_positive_int(void){
    int i;
    do{
        i=get_int();
    }
    while(i<0);
    return(i);
}