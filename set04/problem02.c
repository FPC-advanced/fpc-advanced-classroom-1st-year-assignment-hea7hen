#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

int input(){
    int x;
    scanf("%d",&x);
    return x;
}

int main(){
    Fraction Greatest,Greatest2,Greatest3;
    printf("num: ");
    Greatest.num = input();
    printf("den: ");
    Greatest.den = input();
    printf("num2: ");
    Greatest2.num = input();
    printf("de2: ");
    Greatest2.den = input();
    printf("num3: ");
    Greatest3.num = input();
    printf("den3: ");
    Greatest3.den = input();
    float a,b,c;
    a = Greatest.num/Greatest.den;
    b = Greatest2.num/Greatest2.den;
    c = Greatest3.num/Greatest3.den;
    float  result;
    if(a>=b&&a>=c){
        result=a;
    }
    else if (b>=c){
        result=b;
    }
    else{
        result=c;
    }
    printf("%f",result);  
}
