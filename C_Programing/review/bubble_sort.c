#include<stdio.h>
#include<math.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void nhapmang(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("%3d", a[i]);
    }
}

void sort(int a[], int n){
    for (int i = 0; i < n - 1; i ++){
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[i]){
                swap(&a[j], &a[i]);
            }
        }
    }
}
int main(){
    int n;
    int a[100];
    printf("Nhap n: ");scanf("%d", &n);
    nhapmang(a,n);
    printf("Mang da nhap: ");
    xuatmang(a,n);
    sort(a,n);
    printf("\nSau khi sort: ");
    xuatmang(a,n);
    return 0;
}
