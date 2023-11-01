#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(){
    int n = input();
    int fibo = find_fibo(n);
    output(n,fibo);
}
int input(){
    int c;
    printf("n: ");
    scanf("%d",c);
    return c;
}
int find_fibo(int n){
    int fib[]={0,1};
    int len=0;
    for(int i=0;i<n;i++){
        for(int i=0;fib[i]!='\0';i++){
        len++;
        }
        int a=fib[len-1];
        int b=fib[len-2];
        int c=a+b;
        fib[len]=c;
        printf("%d",fib[len]);
    }
    int fibo = fib[len-1];
    return fibo;
}
void output(int n, int fibo){
    printf("fib: %d",fibo);
}