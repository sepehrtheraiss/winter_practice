#include<stdio.h>
#include<stdlib.h>

int main(int argc,char** argv){
    FILE* fp = NULL;
    char* line = NULL;
    size_t len = 0;
    ssize_t read = 0;
    if(argc == 1){
        printf("Need a file name\n");
        return(EXIT_FAILURE);
       
    }
    fp = fopen(argv[1],"r");
    if(fp == NULL){
        printf("No file name given\n");
        return(EXIT_FAILURE);
    }
    
    while((read = getline(&line,&len.fp)) != -1){
        
    }
    free(line);
return(EXIT_SUCCESS);
}
