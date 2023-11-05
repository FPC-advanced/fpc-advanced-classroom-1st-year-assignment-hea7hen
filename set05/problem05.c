#include <stdio.h>
#include <math.h>

int input(int x);
float borga_X(int x);
void output(int x, float result);

int main(){
    int x;
    input(x);
    float result = borga_X(x);
    output(x,result);
}
int input(int x){
    int x;
    printf("Enter x: ");
    scanf("%d",&x);
    return x;
}
//1 + (x^1)/3! + (x^2)/5! + (x^3)/7! 
float borga_X(int x){
    float res = 1;
    int den = 3;
    int i=1;
    float b = (pow(x,i))/den;
    for(int i=1;c<0.000001;i++){
        c = (pow(x,i))/den;
        b+=c;
        den++;
        for(int j=1;j<=den;){
            
        }
    }
}