// Online C compiler to run C program online


#include <stdio.h>
#include<conio.h>

void nhapmang(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[], int n){
    printf("Mang vua nhap: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
float pos_avg(int a[], int n){
    int sum = 0;
    int pos_count = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > 0){
            sum += a[i];
            pos_count += 1;
        }
    }
    return sum/pos_count;
}
int find_max(int a[], int n){
    int max = a[0];
    for (int i = 0; i < n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    return max;
}
void count_max(int a[], int n, int max){
    int count = 0;
     for (int i = 0; i < n; i++){
        if (max == a[i]){
            count += 1;
        }
    }
    printf("Gia tri lon nhat %d, xuat hien %d lan", max, count);
}
// ********************************************
float calculate_S(int a[], int n){
    float temp_sum = 0;
    float final_sum = a[0];
    for (int i = 1; i < n; i ++){
        for (int j = 0; j <= i; j++){
            temp_sum += get_sign(j) * a[j];   
        }
        float expo_sum = 1;
        for (int j = 0; j < i; j++){
            expo_sum = expo_sum * temp_sum;
        }
        final_sum += (expo_sum)/(i+1);
        temp_sum = 0;
    }
    return final_sum;
}
int get_sign(n){
    if (n % 2 == 0){
        return 1;
    }
    return -1;
}


int main() {
    int a[100];
    int n = 600;
    while (n <= 0 || n > 500){
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
    }
    nhapmang(a,n);
    xuatmang(a,n);
    printf("Positive avg: %.2f", pos_avg(a,n));
    int max_ele = find_max(a, n);
    printf("\n");
    count_max(a, n, max_ele);
    printf("\n");
    printf("S = %f", calculate_S(a, n));
    getch();
    return 0;
}