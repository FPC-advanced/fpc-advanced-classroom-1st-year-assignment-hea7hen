#include <stdio.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main(){
    char name;
    input(&name);
    int res = has_nice_name(&name);
    output(res);
}
void input(char *name){
    printf("Enter name: ");
    scanf("%s",name);
}
int has_nice_name(char *c){
    int s=0;
    char vowels[5] = {'a','e','i','o','u'};
    int good_name = 0;
    for(int i =0;c[i]!='\0';i++){
        for(int j=0;j<5;j++){
            if(c[i]==vowels[j]){
                good_name++;
            }
        }
        s++;
    }
    if(s>=good_name+2){
        // printf("size: %d\n",s);
        // printf("%d",good_name);
        return good_name;
    }
    else{
        // printf("size: %d",s);
        return 0;
    }
}
void output(int res){
    if(res>1){
        printf("Camel has a good name.");
    }
    else{
        printf("Camel has a bad name.");
    }
}