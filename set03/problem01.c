#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main(){
    float x1,x2,y1,y2;
    input(&x1,&y1,&x2,&y2);
    float distance = find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
}
void input(float *x1, float *y1, float *x2, float *y2){
    printf("x1: ");
    scanf("%f",x1);
    printf("y1: ");
    scanf("%f",y1);
    printf("x2: ");
    scanf("%f",x2);
    printf("y2: ");
    scanf("%f",y2);
}
float find_distance(float x1, float y1, float x2, float y2){
    float sq1 = (x2 - x1)*(x2 - x1);
    float sq2 = (y2 - y1)*(y2 - y1);
    float dist = sqrt(sq1-sq2);
}
void output(float x1, float y1, float x2, float y2, float distance);
