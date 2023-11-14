#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main(){
    int n = input_n();
    Triangle t;
}
int input_n(){
    int x; 
    printf("Enter the numbers of triangles to be compared with: ");
    scanf("%d",&x);
    return x;
}

void input_n_triangles(int n, Triangle t[n]){
    for(int i=1;i<=n;i++){
        printf("Enter triangle %d",i);
        scanf("%d",t[0]);
    }
}