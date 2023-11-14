#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    return n;
}
Fraction input_fraction(){
    Fraction f;
    printf("Numerator: ");
    scanf("%d",&f.num);
    printf("Denominator: ");
    scanf("%d",&f.den);
    return f;
}
void input_n_fractions(int n, Fraction f[n]){
    for(int i=0;i<n;i++){
        f[i]=input_fraction();
    }
}
int find_gcd(int a, int b){
    int gcd = 1;
    for(int i=2;i<=a;i++){
        if(a%i==0&&b%i==0){
            gcd = i;
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
}
Fraction add_n_fractions(int n, Fraction f[n]){
    Fraction sum={0,1};
    for(int i=0;i<n;i++){
        sum = add_fractions(sum,f[i]);
    }
    return sum;
}
void output(int n, Fraction f[n], Fraction sum){
    for(int i=0;i<n;i++){
        if(i==n-1){
            printf("%d/%d = ",f[i].num,f[i].den);
        }
        printf("%d/%d + ",f[i].num,f[i].den);
    }
    printf("%d/%d",sum.num,sum.den);
}

int main(){
    int n = input_n();
    Fraction f[n];
    input_n_fractions(n,f);
    Fraction sum = add_n_fractions(n,f);
    output(n,f,sum);
}