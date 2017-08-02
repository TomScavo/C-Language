#include <stdio.h>
void swap(int *i,int *j);
int main(){
    int x=1;
    int y=3;
    printf("x=%i,y=%i\n",x,y);
    printf("swapping...");
    swap(&x,&y);
    printf("swaped\n");
    printf("x=%i,y=%i\n",x,y);
}
void swap(int *i,int *j){
    int tem=*j;
    *j=*i;
    *i=tem;
}