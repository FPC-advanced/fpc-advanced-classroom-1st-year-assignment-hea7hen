#include <stdio.h>
#include <math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input(){
  Point p;
  printf("a: ");
  scanf("%f",&p.x);
  printf("b: ");
  scanf("%f",&p.y);
  return p;
}

void dist(Point a, Point b, float *res){
    float sq1 = (b.x - a.x)*(b.x - a.x);
    float sq2 = (b.y - a.y)*(b.y - a.y);
    *res = sqrt(sq1+sq2);
}

void output(Point a, Point b, float res){
  printf("The Distance between (%f,%f) and (%f,%f) is %f",a.x,a.y,b.x,b.y,res);
}

int main(){
    Point p1,p2;
    printf("P1:\n");
    p1 = input();
    printf("P2:\n");
    p2 = input();
    float res;
    dist(p1,p2,&res);
    output(p1,p2,res);
}