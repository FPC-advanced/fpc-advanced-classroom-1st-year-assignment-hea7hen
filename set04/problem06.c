#include <stdio.h>
#include <string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main(){
    char a[100];
    input_string(a);
    int no_words = count_words(a);
    output(a,no_words);
}
void input_string(char *a){
    printf("Enter string: ");
    fgets(a, 100, stdin);
}
int count_words(char *string){
    int count = 0;
    int space = 1;
    int check=-1;
    for(int i=0;i<100;i++){
        if (check==0&&string[i]==' ')
        {
            check=1;
        }
        else if(count==0&&string[i]!=' '){
            check = 0;
            count++;
        }
        else if(check==1&&string[i]!=' '){
            count++;
            check=0;
        }
    }
    return count;
}
void output(char *string, int no_words){
    printf("%d",no_words);
}