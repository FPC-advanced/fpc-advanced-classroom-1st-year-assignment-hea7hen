#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main(){
    float radius,height,length;
    input_camel_details(&radius,&height,&length);
    int mood=find_mood(radius,height,length);
    output(radius,height,length,mood);
}
void input_camel_details(float *radius, float *height, float *length){
    printf("radius: ");
    scanf("%f",radius);
    printf("length: ");
    scanf("%f",length);
    printf("height: ");
    scanf("%f",height);
}
int find_mood(float radius, float height, float length){
    int res=0;
    if(radius<height&&radius<length){
        res=1;
    }
    else if (height<length&&height<radius)
    {
        res=2;
    }
    else{
        res=3;
    }
    return res;

}
void output(float radius, float height, float length, int mood){
    if(mood==1){
        printf("The Camel is Sick");

    }
    else if (mood==2)
    {
        printf("The Camel is Happy.");
    }
    else{
        printf("The Camel is Tense.");
    }

    
}