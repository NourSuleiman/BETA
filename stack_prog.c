#include <stdio.h>
#include <stdlib.h>
#include"stack_init.h"

int array_stack[stack_size];

int sp=0;

s_tatus push_stack(int data)
{
    int status= stack_push_done;
    if(sp==stack_size)
    {
        status= stack_full;
    }
    else{
        array_stack[sp]=data;
        sp++;
        //status= stack_push_done
    }
    return status;
}

s_tatus pop_stack(int *pdata)
{
    int status=stack_pop_done;
    if(sp==0){
        status= stack_empty;
    }
    else
    {
        sp--;
       *pdata = array_stack[sp];
       status = stack_pop_done;

    }
    return status;
}
