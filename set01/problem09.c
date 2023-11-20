#include <stdio.h>

int input(){
    int n;
    printf("n: "); 
    scanf("%d", &n);
    return n;
}
float sqroot(float n){
    float i=0;
    for(i=1.414;i*i<n;i+=0.0001);
    return i;
}
int main(){
    float n;
    n= input();
    float sqr = sqroot(n);
    printf("%.3f\n",sqr);
}