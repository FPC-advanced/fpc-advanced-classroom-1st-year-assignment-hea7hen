#include <stdio.h>

int main(){
    
    char string[10]="dheloklo";
    char s[10]="elk";

    for(int i=0;string[i]!='\0';i++){
        int k = 0;
        if(string[i]==s[0]){
            for(int j=0;s[j]!='\0';j++){
                printf("j: %c\n",s[j]);
                printf("i: %c\n",string[j+i]);
                if(s[j]!=string[j+i]){
                    k=1;
                    break;
                };
            }
            printf("k: %d\n",k);
        }
    }
}