#include "stdio.h"
#include "sub.c"

int main(void)
{
    int rt;
    printf("hello world.this is the first git\n");
    printf("10+20 = %d.\n",sum(10,20));
    printf("20-10 = %d.\n",sub(20,10));
    rt = max(10,20,25);
    printf("tha max vlaue is %d \n",rt);
    
    return 0;
}
