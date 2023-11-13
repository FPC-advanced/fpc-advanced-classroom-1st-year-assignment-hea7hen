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
    scanf("%d",f.num);
    printf("Denominator: ");
    scanf("%d",f.den);
}
void input_n_fractions(int n, Fraction f[n]){
    for(int i=0;i<n;i++){

    }
}
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main(){
    int n = input_n();
    
    Fraction f[n];
    input_n_fractions(n,f);
    
}