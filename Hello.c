#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("请输入小钱的名字： ");
    
    char *s=get_string();
    if(s!=NULL)
    {
    printf("Hello,%s.\n",s);
    }
}