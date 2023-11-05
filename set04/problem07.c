#include <stdio.h>


int main(){
    char str[20];
    fgets(str, 20, stdin);
    // printf("%d", sizeof(str));
    if(str[0]==' '){
        printf("space");
    }
    return 0;
}
