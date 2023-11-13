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
    int fib[100]={0,1};
    int len=0;

    for(int i=0;i<n;i++){
        
    }
    int fibo = fib[len-1];
    return fibo;
}
void output(int n, int fibo){
    printf("fib: %d",fibo);
}