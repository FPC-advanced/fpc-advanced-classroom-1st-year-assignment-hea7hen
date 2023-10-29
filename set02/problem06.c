#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main(){
    char str,a,rev_str;
    input_string(&a);
    

}
void input_string(char *a){
    printf("Enter string: ");
    scanf("%s", a);
}