#include <stdio.h>
#include <math.h>

int input_degree(){
    int x;
    printf("Degree: ");
    scanf("%d",&x);
    return x;
}
void input_coefficients(int n, float a[n]){
    for(int i=0;i<=n;i++){
        // printf("c%d: ",i);
        scanf("%f",&a[i]);
    }
}
float input_x(){
    float x;
    printf("x: ");
    scanf("%f",&x);
    return x;
}
float evaluate_polynomial(int n, float a[n], float x){
    float result=0;
    for(int i=0;i<=n;i++){
        result+=a[i]*(pow(x,i));
        float k = a[i]*(pow(x,i));
    }
    return result;

}
void output(int n, float a[n], float x, float result){
    printf("final result: %f",result);
}

int main(){
    int n = input_degree();
    float a[n];
    input_coefficients(n,a);
    float x = input_x();
    float result = evaluate_polynomial(n,a,x);
    output(n,a,x,result);
}