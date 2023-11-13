#include <stdio.h>
#include <math.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input(){
    Camel c;
    printf("radius: ");
    scanf("%f",&c.radius);
    printf("height: ");
    scanf("%f",&c.height);
    printf("length: ");
    scanf("%f",&c.length);
    return c;
}
float find_weight(Camel c){// `weight = pi * stomach_radius^3 * sqrt(height * length)`
    float pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    float stomach_radius = c.radius;
    float height = c.height;
    float lenght = c.length;
    float weight = pi*(pow(stomach_radius,3))*sqrt(height*lenght);
    c.weight = weight;
    return weight;
}  //pass by value
//or
// void find_weight(Camel *c); //passing address variable
void output(Camel c){
    printf("The weight of the camel with radius: %f, height: %f, length: %f is %f",c.radius,c.height,c.length,c.weight);
}

int main(){
    Camel c;
    c = input();
    c.weight = find_weight(c);
    output(c);
}