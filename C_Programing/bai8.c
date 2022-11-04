#include<conio.h>
#include <stdio.h>
 
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
 
void print_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void print_reverse_array(int arr[], int size)
{
    int i;
    for (i = size -1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");
}

void input_array(int array[], int length){
    for (short i = 0; i < length; i++){
        printf("Nhập số thứ %d ", i+1);
        scanf("%d", &array[i]);
    }
}
int main(){
    int choice;
    int n = 4;
    int array[4];
    do{
        printf("-------SOFT PROGRAM-------------\n");
        printf ("Bạn chọn cái nào?  Press 3 to exit.\n");
        printf("1) Từ nhỏ đến lớn \n");
        printf("2) Từ lớn đến nhỏ \n");
        printf("3) Kết thúc \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            input_array(array, n);
            bubbleSort(array,n);
            print_array(array, n);
            break;
        case 2:
            input_array(array, n);
            bubbleSort(array,n);
            print_reverse_array(array, n);
        default:
            break;
        }

        }while (choice != 3);
    return 0;
}