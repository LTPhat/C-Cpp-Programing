#include<stdio.h>
#include<math.h>

int factorial(int n){
    if (n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

float S(int n, int x){
    float res = 1;
    for (int i = 0; i <= n; i ++){
        res += (pow(-1,i+1) * pow(x,2*i+1))/factorial(2*i+1);
    }
    return res;
}

int main(){
    int n;
    int x;
    printf("n = "); scanf("%d", &n);
    printf("x = ");scanf("%d", &x);
    printf("S = %f", S(n,x));
    return 0;
}
