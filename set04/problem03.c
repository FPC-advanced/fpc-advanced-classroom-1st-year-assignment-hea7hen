#include <stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
    int result,n,r;
    input_n_and_r(&n,&r);
    result = nCr(n,r);
    output(n,r,result);

}
void input_n_and_r(int *n, int *r){
    printf("n: ");
    scanf("%d",n);
    printf("r: ");
    scanf("%d",r);
}
int nCr(int n, int r){
    int c=1;
    int r1=1;
    int c_r=1;
    for(int i=1;i<=n;i++){
        c*=i;
    }
    for(int i=1;i<=r;i++){
        r1*=i;
    }
    for(int i=1;i<=n-r;i++){
        c_r*=i;
    }
    printf("c: %d\n",c);
    printf("r1: %d\n",r1);
    printf("c_r: %d\n",c_r);
    int res=c/((c_r)*r1);
    return res;
}
void output(int n, int r, int result){
    printf("%d",result);
}