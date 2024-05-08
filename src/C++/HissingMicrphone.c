#include <stdio.h>
char string[30];
int main(){
    
    scanf("%s",string);

    for(int i = 0; i < 30; i++){
        if(string[i] == 's' && string[i+1] == 's'){
            printf("hiss");
            return 0;
        }
    }
    printf("no hiss");
    return 0;
}