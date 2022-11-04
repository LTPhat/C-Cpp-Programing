#include<stdio.h>
#include<conio.h>

// int max_min(int a, int b, int c){
//     int array[] = {a,b,c};
//     int max = array[0];
//     int min = array[0];
//     for (int i = 0; i <= 3; i++){
//         if (array[i] > max){
//             max = array[i];
//         }
//         if (array[i] < min){
//              min = array[i];
//         }
//     }
//     printf("Số lớn nhất là: %d", max);
//     printf("Số bé nhất là: %d", min);
// }

int main(){
    int first, second, third;
    printf("Nhập số thứ nhất: ");
    scanf("%d", &first);
    printf("\nNhập số thứ hai: ");
    scanf("%d", &second);
    printf("\nNhập số thứ ba: ");
    scanf("%d", &third);
    int array[] = {first,second,third};
    int max = array[0];
    int min = array[0];
    for (int i = 0; i <= 2; i++){
        if (array[i] > max){
            max = array[i];
        }
        if (array[i] < min){
             min = array[i];
        }
    }
    printf("Số lớn nhất là: %d \n", max);
    printf("Số bé nhất là: %d ", min);
    getch();
    return 0;
}