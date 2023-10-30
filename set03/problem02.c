#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("x1: ");
    scanf("%f",x1);
    printf("y1: ");
    scanf("%f",y1);
    printf("x2: ");
    scanf("%f",x2);
    printf("y2: ");
    scanf("%f",y2);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
    float sq1 = (x2 - x1)*(x2 - x1);
    float sq2 = (y2 - y1)*(y2 - y1);
    float dist = sqrt(sq1+sq2);
    return dist;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main(){
    float x1,x2,y1,y2,x3,y3;
    input_triangle(&x1,&x2,&x3,&y1,&y2,&y3);
    int result = is_triangle(x1,x2,x3,y1,y2,y3);
    output(x1,x2,x3,y1,y2,y3,result);
}
