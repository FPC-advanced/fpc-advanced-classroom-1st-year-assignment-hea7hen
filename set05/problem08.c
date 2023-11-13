#include <stdio.h>

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
    Camel c[n];
    input(n,c,&truck_weight);
    find_camel_weight(n,c);
    float total_weight = compute_total_weight(n,c,truck_weight);
    output(total_weight);
}
void input(int n, Camel c[n], float *truck_weight){
    printf("Enter the number of camels:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the height of camel no. %d:",i+1);
        scanf("%f",&c[i]);
        printf("Enter the length of camel no. %d:",i+1);
        printf("Enter the radius of camel no. %d:",i+1);
    }
}