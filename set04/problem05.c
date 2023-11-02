#include <stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main(){
    int n = input_size();
    int a[n];
    input_array(n,a);
    int index = find_largest_index(n,a);
    output(index);
}
int input_size(){
    int x;
    printf("Enter n: ");
    scanf("%d",&x);
    return x;
}
void input_array(int n, int a[n]){
    for(int i = 0;i<n;i++){
        printf("Enter value %d: ",i+1);
        scanf("%d",&a[i]);
    }
}
int find_largest_index(int n, int a[n]){
    int L=a[0];
    for(int i = 0;i<n;i++){
        if(a[i]>L){
            L=a[i];
        }
    }
    return L;
}
void output(int index){
    printf("The index of the largest number in the array is %d",index);
}