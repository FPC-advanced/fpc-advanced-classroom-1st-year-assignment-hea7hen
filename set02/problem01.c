#include <stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main(){
    float base,height,area;
    input(&base, &height);
    find_area(base, height, &area);
    output(base, height, area);
}
void input(float *base, float *height){
    printf("Enter the length of the base: ");
    scanf("%f",base);
    printf("Enter the length of the height: ");
    scanf("%f",height);
}
void find_area(float base , float height, float *area){
    *area = (base*height)/2;
}
void output(float base, float height, float area){
    printf("\nThe area is %.2f square units.\n", area);
}