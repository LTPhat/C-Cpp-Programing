/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void nhapmang(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[], int n){
    printf("\nMang vua nhap: ");
    for (int i = 0; i < n; i++){
        printf("%2d ", a[i]);
    }
}
int find_max(int a[], int n){
    int max = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    return max;
}

int find_second(int a[], int n){
    int max = a[0];
    int second =  a[1];
    if (max < second){
        swap(&max, &second);
    }
    for(int i = 2; i < n; i++){
        if (a[i] > max){
            second = max;
            max = a[i];
        }else if (second < a[i] && a[i] < max){
            second = a[i];
        }else{
            continue;
        }
    }
    return second;
}
int main()
{
    int a[100];
    int n;
    do {
        printf("Input n: ");scanf("%d", &n);
         if(n < 0)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }
    }while (n <=0 );
    nhapmang(a,n);
    xuatmang(a,n);
    printf("\nPhan tu lon nhat trong mang: %d", find_max(a,n));
    printf("\nPhan tu lon thu hai trong mang: %d", find_second(a,n));
    return 0;
}
