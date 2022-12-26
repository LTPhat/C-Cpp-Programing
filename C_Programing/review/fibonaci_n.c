#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int fibonacci(int n){
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int checksnt(int n){
    int count = 0;
    for (int i = 1; i < sqrt(n)+1; i++){
        if (n % i == 0){
            count ++;
        }
    }
    if (count == 1){
        return 1;
    }
    return 0;
}
void fibonacci_less_n(int n){
    int i = 0; 
    printf("Cac so fibonaci nho hon n va la so nguyen to: ");
    while (fibonacci(i) < n){
        if (checksnt(fibonacci(i)) == 1){
            printf("%d ",fibonacci(i));
        }
        i++;
    }
}
int main(){
    int n = 100;
    // printf("%d", fibonacci(n));
    // printf("%d", checksnt(n));
    fibonacci_less_n(n);
    return 0;
}