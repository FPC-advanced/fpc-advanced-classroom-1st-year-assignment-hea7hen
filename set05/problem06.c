#include <stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main(){
    int n = input_n();
    int a[n];
    input(n,a);
    int avg = odd_average(n,a);
    output(avg);
}
int input_n(){
    int x;
    printf("Enter n: ");
    scanf("%d",&x);
    return x;   
}
void input(int n, int a[n]){
    for(int i=0;i<n;i++){
        printf("Enter num %d: ",i);
        scanf("%d",&a[i]);
    }
}
float odd_average(int n, int a[n]){
    float avg=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0&&a[i]!=0){
            cnt++;
            avg+=a[i];
            // printf("a[i]: %f\n",avg);
        }
    }
    float average = avg/cnt;
    // printf("%f\n",average);
    return average;
}
void output(float avg){
    printf("avg: %f",avg);
}