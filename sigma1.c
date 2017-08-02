#include <stdio.h>
#include <cs50.h>

int sigma(int integer);
int main(){
    int i =0;
    do{
        printf("positive integer please:");
         i=get_int();
    }
    while(i<=0);
    printf("the sum is :%i.\n",sigma(i));
}

int sigma(int integer){
    
    if( integer==0){
        
        return(0);
    }
    return(integer +sigma(integer-1));
}