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
    Fraction Smallest,Smallest2,Smallest3;
    printf("num: ");
    Smallest.num = input();
    printf("den: ");
    Smallest.den = input();
    printf("num2: ");
    Smallest2.num = input();
    printf("de2: ");
    Smallest2.den = input();
    printf("num3: ");
    Smallest3.num = input();
    printf("den3: ");
    Smallest3.den = input();
    float a,b,c;
    a = (float)Smallest.num/Smallest.den;
    b = (float)Smallest2.num/Smallest2.den;
    c = (float)Smallest3.num/Smallest3.den;
    float  result;
    if(a<=b&&a<=c){
        printf("%d/%d",Smallest.num,Smallest.den);
    }
    else if (b<=c){
        printf("%d/%d",Smallest2.num,Smallest2.den);
    }
    else{
        printf("%d/%d",Smallest3.num,Smallest3.den);
    }
}
