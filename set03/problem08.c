#include <stdio.h>
#include <math.h>

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
                
}
int input_polygon(Polygon *p){
    p->sides = input_n();
    char prompt;
    for(int i=0;i<p->sides;i++){
        prompt=("Enter the coordinates of point %d (x,y):",i+1);
        p->p[i] = input_point(&prompt);
    }
    return p->sides;
}
float find_distance(Point a, Point b){
    Point p;
    float sqt = pow(p.x,2)*pow(p.y,2);
    float dist = sqrt(sqt);
    return dist;
}
void find_perimeter(Polygon* p){
    for(int i=0;i<p->sides-1;i++){
        p[i] = p[o]
    }
}
void output(Polygon p){
    printf("The perimeter of the polynomial is %d",p.perimeter);
}

int main(){
    Polygon p;
    int n = input_polygon(&p);
    input_polygon(&p);
    find_perimeter();;
}