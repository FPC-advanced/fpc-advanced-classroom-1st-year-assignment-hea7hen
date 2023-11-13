#include <stdio.h>
#include <math.h>

typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main(){
    int n;
    float truck_weight;
    printf("Enter the number of camels:\n");
    scanf("%d",&n);
    Camel c[n];
    input(n,c,&truck_weight);
    find_camel_weight(n,c);
    float total_weight = compute_total_weight(n,c,truck_weight);
    output(total_weight);
}
void input(int n, Camel c[n], float *truck_weight){
    
    for(int i=0;i<n;i++){
        printf("Enter the height of camel no. %d\n:",i+1);
        scanf("%f",&c[i].height);
        printf("Enter the length of camel no. %d:\n",i+1);
        scanf("%f",&c[i].length);
        printf("Enter the radius of camel no. %d:\n",i+1);
        scanf("%f",&c[i].radius);
    }
    printf("Enter the weight of the truck:\n");
    scanf("%f",truck_weight);
}
void find_camel_weight(int n, Camel c[n]){
    float camel_weight;
    float pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    for(int i=0;i<n;i++){
        float weight = pi*(pow(c[i].radius,3))*sqrt(c[i].height*c[i].length);
        camel_weight+=weight;
        printf("weight: %f\n",camel_weight);
    }
    c->weight=camel_weight;
}
float compute_total_weight(int n, Camel c[n], float truck_weight){
    float total = c->weight+truck_weight;
    return total;
}
void output(float total_weight){
    printf("The Total weight of the truck is: %f",total_weight);
}