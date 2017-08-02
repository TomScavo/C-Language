#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <unistd.h>
#include "list0.h"
//this program is linked list
node *list1=NULL;
node *next=NULL;
void insert();
void traverse();
void delete();
void search();

int main ()
{
    int n=0;
    //print number to order methods 
  do{
      printf(
          "   菜单\n"
          "1 - 输入 \n"
          "2 - 查看\n"
          "3 - 删除\n" 
          "4 - 搜索\n"
          "0 - 退出\n"
          );
       traverse();
      printf("命令: ");  
      n=get_int();
      //do cases
      switch(n){
          case 1 : insert(); break;
          case 2 : traverse(); sleep(4);  break;
          case 3 : delete();   break;
          case 4 : search();sleep(3); break;
        }
  }
        while(n!=0);
        
    } 
    //insert integers
    void insert(void){
        node *ptr=next; 
        next= malloc(sizeof(node));
        if(next==NULL){
            return;
        }
        if(list1==NULL){
          list1=next;
      }
        printf("请输入数字: ");
        next->n=get_int();
        next->next=NULL;
        if(ptr!=NULL){
            ptr->next=next;
        }
    }
    
    void traverse(){
        if(list1==NULL){
            printf("这个列表还没有任何数字，请输入后在试！\n");
            return;
        }
        printf("这个列表是:");
        node *ptr1=list1;
        while(ptr1!=NULL){
            printf("[%i]  ",ptr1->n);
            ptr1=ptr1->next;
        }
        printf("\n");
    }
    void delete(){
        if(list1==NULL){
            printf("这个列表还没有任何数字，请输入后在试！\n");
            return;
        }
        node *search_frt=list1;
        node *search=list1->next;
        traverse();
        printf("你想删除哪一个?: ");
        int n=get_int();
        
        if(n==list1->n){
            free(list1);
            list1=list1->next;
           
            return;
        }
        while(search->next!=NULL){
            if(n==search->n){
                search_frt->next=search->next;
                free(search);
                return;
            }
            else{
                search_frt=search;
                search=search->next;
            }
        }
        if(n==search->n){
            search_frt->next=NULL;
        }
    }     
 void search(){
     if(list1==NULL){
            printf("这个列表还没有任何数字，请输入后在试！\n");
            return;
        }
     node *search=list1;
     printf("你想要搜索哪一个?: ");
     int n=get_int();
     while(search->next!=NULL){
         if(n==search->n){
             printf("yep,you'er right,bro!!it have.\n");
             return;
         }else{
             search=search->next;
         }
        }
       if(n==search->n){
             printf("yep,you'er right,bro!!it have.\n");
         }else{
             printf("Holy crap!!Oooops,something must wrong,but the world is beatiful,you can try again.\n");
         }
 }
