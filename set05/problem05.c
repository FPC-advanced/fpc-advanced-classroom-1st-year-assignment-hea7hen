#include <stdio.h>
#include <math.h>

int input(int x);
float borga_X(int x);
void output(int x, float result);

int main(){
    int n;
    int x = input(n);
    float result = borga_X(x);
    output(x,result);
}
int input(int x){
    printf("Enter x: ");
    scanf("%d",&x);
    return x;
}
//1 + (x^1)/3! + (x^2)/5! + (x^3)/7! 
int fact(int n){
    int fact=1;
    if(n<2){
        return fact;
    }
    else{
        for(int i=n;i>0;i--){
            fact*=i;
        }
    }
    return fact;
}   
float borga_X(int x){
    float borg = 1;
    float term=1;
    for(int i=1,j=3;term>0.000001;i++,j+=2){
        term = (pow(x,i)/fact(j));
        printf("term: %f\n",term);
        borg+=term;
    }
    return borg;
}


void output(int x, float result){
    printf("borg(%d) = %.5f",x,result);
}