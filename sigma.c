#include <stdio.h>
#include <cs50.h>

int sigma(int integer);

int main(void){
    int sum=0;
    do{
        
        printf("postive inteter please:");
        sum =get_int();
    }
    while (sum<=0);
    
    
    printf("the sum is:%i\n",sigma(sum));
}

int sigma(int integer){
    int sum=0;
    for(int i=0;i<=integer;i++){
        sum+=i;
     }
    return(sum);
}