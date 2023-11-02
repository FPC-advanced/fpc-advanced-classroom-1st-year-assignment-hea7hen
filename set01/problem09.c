#include <stdio.h>

int main(){
    float i,n;
    printf("n: "); 
    scanf("%f", &n);
    for(i=1.41;i*i<n;i+=0.0001);
    printf("%.3f\n",i);
}