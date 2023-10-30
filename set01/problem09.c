#include <stdio.h>
#include <math.h>

int main(){
    float i,n;
    printf("n: "); 
    scanf("%f", &n);
    for(i=0.01;i*i<n;i+=0.0001);
    printf("%.4f\n",i);
    printf("%f",sqrt(n));
}