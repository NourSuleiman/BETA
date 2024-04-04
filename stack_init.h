#define stack_size   5

typedef enum stack_staus
{
    stack_empty,
    stack_full,
    stack_pop_done,
    stack_push_done
}s_tatus;

s_tatus push_stack(int data);

s_tatus pop_stack();
