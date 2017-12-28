#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int greater(char* a,char* b,int size){
    // 0 less, 1 greater,2 equal
    // care about most significant digit
    // if loop ends means they are equal
    for(int i =0;i<size;i++){
        if(a[i] > b[i]){
            return 1;
        }
        else if(a[i] == b[i]){
        //ok continue
        }
        else{
            return 0;
        }
    }
    return 2;
}
int size(char* s){
    int size = 0;
    while(*s != '\0' && *s != '\n'){
        s += 1;
        size++;
    }
    return size;
}
int main()
{
    int i =0;
    int n;
    char* str = malloc(sizeof(char)*1000);
    char** s_arr;
    scanf("%i ",&n);
    s_arr = malloc(sizeof(char)*n);
    while(i < n){
        s_arr[i] = malloc(sizeof(char)*1000);
        fgets(s_arr[i],1000,stdin);
//        int a = size(s_arr[i]);
  //      if(a < 1000){
    //        s_arr[i] = realloc(s_arr[i],a);
      //  }
        i++;
    }

    i = 0;
    int is,js,com;
    while(i<n-1){
        for(int j=i+1;j<n-1;j++){
            is = size(s_arr[i]);
            js = size(s_arr[j]);
            
            if(is > js){
                strcpy(str,s_arr[i]);
                //printf("%s",str);
        //        s_arr[i] = realloc(s_arr[i],js);
                strcpy(s_arr[i],s_arr[j]);
          //      s_arr[j] = realloc(s_arr[j],is);
                strcpy(s_arr[j],str);
            }
            else if (is == js){
                com = greater(s_arr[i],s_arr[j],is);
                if(com == 1){
                    strcpy(str,s_arr[i]);
                    strcpy(s_arr[i],s_arr[j]);
                    strcpy(s_arr[j],str);
                }
            }
         
        }
        i++;
    }

    free(str);
    for(int i =0;i<n;i++){
        printf("%s",s_arr[i]);
    }
    for(int i =0;i<n;i++){
        free(s_arr[i]);
    }
    free(s_arr);
    return 0;
}
