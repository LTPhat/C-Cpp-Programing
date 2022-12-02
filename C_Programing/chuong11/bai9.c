#include <stdio.h>
#include <math.h>
int checksnt(int n){
    int count = 0;
    if (n == 1){
        return 0;
    }
    for (int i = 1; i <= sqrt(n); i++){
        if (n%i == 0){
            count ++;
        }
    }
    if (count == 1){
        return 1;
    }
    return 0;
}


int main()
{   
    int a[10][10];
    int rows, cols;
    printf("Nhap so hang: "); scanf("%d", &rows);
    printf("Nhap so cot: ");scanf("%d", &cols);
    for (int i =0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("a[%d][%d]= ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i =0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (checksnt(a[i][j]) == 1){
                printf("%d o vi tri hang %d cot %d\n", a[i][j], i, j);
                }
            }
        }
    return 0;
}
