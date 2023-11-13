#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction()
{
    Fraction x;
    printf("num: ");
    scanf("%d",&x.num);
    printf("den: ");
    scanf("%d",&x.den);
    return x;
}
int find_gcd(int a, int b){
    int gcd = 1;
    for(int i=2;i<=a;i++){
        if(a%i==0&&b%i==0){
            gcd = i;
            // printf("gcd: %d\n",gcd);
        }
    }
    return gcd;
}
Fraction add_fractions(Fraction f1, Fraction f2){
    Fraction sum;
    if(f1.den == f2.den){
        sum.num = f1.num+f2.num;
        sum.den = f1.den;
    }
    else{
        sum.den = f1.den*f2.den;
        sum.num = (f1.num*(f2.den)+f2.num*(f1.den));
    }
    int gcd = find_gcd(sum.num,sum.den);
    // printf("num: %d\n",sum.num);
    // printf("den: %d\n",sum.den);
    // printf("gcd: %d\n",gcd);
    sum.den/=gcd;
    sum.num/=gcd;
    // printf("num: %d\n",sum.num);
    // printf("den: %d\n",sum.den);
    return sum;
    //58/48
}
void output(Fraction f1, Fraction f2, Fraction sum){
    printf("%d/%d + %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}

int main(){
    Fraction f1, f2, sum;
    printf("F1: \n");
    f1 = input_fraction();
    printf("F2: \n");
    f2 = input_fraction();
    sum = add_fractions(f1,f2);
    output(f1,f2,sum);
}
