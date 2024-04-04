#include <stdio.h>
#include <stdlib.h>
#include"stack_init.h"

int main()
{
    int x,data,data1;
   while(1)
   {
     printf("enter your status\n");
     scanf("%d",&x);
     if(x>0)
     {
       printf("enter your data\n");
       scanf("%d",&data);
      int z= push_stack(data);
       if(z==stack_full)
       {
           printf("stack full\n");
       }
       else{
         printf("data pushed %d\n",data);
       }

     }
     else{

        int c=pop_stack(&data1);
        if(c== stack_empty)
        {
                printf("stack empty\n");
        }
        else{
             printf("data poped %d\n",data1);
        }
     }


   }

    return 0;
}
