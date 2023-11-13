#include <stdio.h>

int main(){
    int n=10;
    float i;
    for(i=n/100;i*i<0.001;){
        if((i*i)<n){
            i*=i;
            i*=10;
            printf("i: %f\n",i);
        }
        else{
            i/=10;
        }
    }
}