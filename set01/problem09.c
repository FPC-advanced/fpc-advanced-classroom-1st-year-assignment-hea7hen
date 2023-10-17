#include <stdio.h>

int main(){
    float i,n;
    printf("n: "); 
    scanf("%f", &n);
    for(i=0.01;i*i<n;i+=0.01);
    printf("%.2f",i);
}