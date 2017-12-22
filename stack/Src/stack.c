#include "../Header/stack.h"
typedef struct stack_node{
    int size;
    node* head;
    node* tail;
}stack_node;

stack_node* cast(void* n){return n;}
// returns a new stack node
void* stack_init(){
    stack_node* sPtr = malloc(sizeof(stack_node));
    sPtr->size = 0;
    sPtr->head = NULL;
    sPtr->tail = NULL;
    return sPtr;
}
void stack_deinit(void* n);
int stack_empty(void* n){
    return (cast(n)->size == 0);
}
int stack_size(void* n){
    return cast(n)->size;
}
void* back(void* n);
// both will return 1 on success and 0 on fail
int push_back(void* s,char* str){
    node* n = newNode(str);
    if(cast(s)->head == NULL){
        cast(s)->head = n;
        cast(s)->tail = n;
    }
    else{
        node* tmp = cast(s)->tail;
        tmp->next = n;
        n->prev = tmp;
        cast(s)->tail = n;
    }
    cast(s)->size++;
    return 1;
}
char* pop_back(void* s){
    if(cast(s)->size == 0){
        printf("poping on empty stack\n");
        exit(EXIT_FAILURE);
    }
    char* str = cast(s)->tail->str;
    node* d = cast(s)->tail;
    cast(s)->tail = cast(s)->tail->prev;
    freeNode(d);
    if(cast(s)->tail != NULL){
        cast(s)->tail->next = NULL;
    }
    cast(s)->size--;
    return str;
}

void printStack(FILE* out,void* s){
    node* ptr = cast(s)->head;
    while(ptr != NULL){
        fprintf(out,"%s\n",ptr->str);
        ptr = ptr->next;
    }
}
