#include <stdio.h>

typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n(){
    int n;
    printf("Enter the number of sides of the polygon:\n");
    scanf("%d",n);
    return n;
}
Point input_point(char *promt_msg){
    printf("Enter the coordinates of point 1 (x,y):");
}
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main(){
    Polygon p;
    int n = input_n();
    
}