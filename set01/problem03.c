#include <stdio.h>
int input(int n){
    printf("enter n: ");
    scanf("%d",&n);
    return n;
}
int add(int a, int b){
    return a+b;
}
void output(int a, int b, int sum){
    printf("sum=%d\n",sum);
}
int main(){
    int a,b;
    a = input(a);
    b =input(b);
    int sum = add(a,b);
    output(a,b,sum);
    return 0;
}