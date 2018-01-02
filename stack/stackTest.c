#include "./Header/stack.h"
int main(){
    stack* s = stack_init();
    printf("empty: %i\n",stack_empty(s));
    printf("size: %i\n",stack_size(s));
    push_back(s,"something");
    printf("empty: %i\n",stack_empty(s));
    printf("size: %i\n",stack_size(s));
    push_back(s,"something else");
    push_back(s,"something else else");
    printf("size: %i\n",stack_size(s));
    printStack(stdout,s);
    printf("poped: %s\n",pop_back(s));
    printf("size: %i\n",stack_size(s));
    printStack(stdout,s);
    printf("back: %s\n",back(s));
    printf("poped: %s\n",pop_back(s));
    printf("size: %i\n",stack_size(s));
    printStack(stdout,s);
    printf("poped: %s\n",pop_back(s));
    printf("size: %i\n",stack_size(s));
    printStack(stdout,s);
//    printf("poped: %s\n",pop_back(s));
    printf("size: %i\n",stack_size(s));
    stack_deinit(s);
    return (EXIT_SUCCESS);
}
