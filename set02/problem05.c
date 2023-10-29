#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main(){
    int a = input();
    int b = input();
    int gcd = find_gcd(a,b);
    output(a,b,gcd);
}
int input() {
    int num;
    printf("Please enter an integer: ");
    scanf("%d", &num);
    return num;
}
int find_gcd(int a, int b) {
    int cd1[100],e=0;

    for(int i=2;i<a/2+1 && i<b/2+1;i++){
        if(a%i==0 && b%i==0){
            cd1[e]=i;
            e++;
        }
    }
    int gcd = cd1[e-1];
    return gcd;
    
}
void output(int a, int b, int gcd){
    printf("gcd: %d",gcd);
}