//Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn

#include<stdio.h>
#include<math.h>


float calculate(int n){
    if (n == 0){
        return 0;
    }
    return sqrt(2+calculate(n-1));
}

int main(){
    int n;
    do{
        printf("Nhap so n: ");
        scanf("%d", &n);
    }while (n < 0  || n > 100);
    printf("S = %.5f", calculate(n));
    return 0;
}