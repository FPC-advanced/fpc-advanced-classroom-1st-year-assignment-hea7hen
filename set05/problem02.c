#include <stdio.h>
#include <math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main(){
    float radius,height,length;
    input_camel_details(&radius,&height,&length);
    float weight = find_weight(radius,height,length);
    output(radius,height,length,weight);
}
void input_camel_details(float *radius, float *height, float *length){
    printf("radius: ");
    scanf("%f",radius);
    printf("length: ");
    scanf("%f",length);
    printf("height: ");
    scanf("%f",height);
}
float find_weight(float radius, float height, float length){
    float pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    float weight = pi * pow(radius,3) * sqrt(height * length);
    return weight;
}
void output(float radius, float height, float length, float weight){
    printf("The weight of the camel with radius: %f, height: %f, length: %f is %f",radius,height,length,weight);
}