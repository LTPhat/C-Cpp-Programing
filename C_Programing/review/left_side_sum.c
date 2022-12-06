//Bài 90: Viết chương trình tìm số nguyên dương m lớn nhất sao cho 1 + 2 + … + m < N
#include<stdio.h>
#include<math.h>

int check(int n){
    int sum = 1;
    int i = 0;
    while(sum + i < n){
        i += 1;
        sum += i;
    }
    return i;
}

int print_sum(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n = -1;
    do{
        printf("Nhap so n: ");
        scanf("%d", &n);
    }while(n < 0);
    printf("n = %d", n);
    printf("\nResult = %d", check(n));
    printf("\nLeft-side sum = %d", print_sum(check(n)));
    return 0;
}