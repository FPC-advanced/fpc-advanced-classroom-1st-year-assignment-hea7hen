#include <stdio.h>

int input(){
    int n;
    printf("n: "); 
    scanf("%d", &n);
    return n;
}
float sqroot(float n){
    float i;
    for(i=n/100;i*i<0.001;){
        if((i*i)<n){
            i*=i;
            printf("i: %f",i);
        }
    }
    return i;
}
int main(){
    float n;
    n= input();
    float sqr = sqroot(n);
    printf("%.3f\n",sqr);
}