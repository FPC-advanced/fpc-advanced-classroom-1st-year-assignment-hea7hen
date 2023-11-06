#include <stdio.h>
#include <math.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main(){
    int num1,den1,num2,den2;
    input(&num1,&den1,&num2,&den2);
    int res_num;
    int res_den;
    add(num1,den1,num2,den2,&res_num,&res_den);
    output(num1,den1,num2,den2,res_num,res_den);
}
void input(int *num1, int *den1, int *num2, int *den2){
    printf("num1: \n");
    scanf("%d",num1);
    printf("den1: \n");
    scanf("%d",den1);
    printf("num2: \n");
    scanf("%d",num2);
    printf("den2: \n");
    scanf("%d",den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den){
    *res_num = num1*den2+num2*den1;
    *res_den = den1*den2;
    int gcd = 0;
    for(int i=1;i<=*res_num;i++){
        if(*res_num%i==0&&*res_den%i==0&&i>gcd){
            gcd = i;
            // printf("gcd: %d\n",i);
        }
    }
    while(*res_num%gcd==0&&*res_den%gcd==0&&gcd>1){
        *res_num=*res_num/gcd;
        *res_den=*res_den/gcd;
    }
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den){
    printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
}