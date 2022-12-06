/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>


void nhapmatran(int a[][100], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void xuatmatran(int a[][100], int rows, int cols){
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%2d", a[i][j]);
        }
        printf("\n");
    }
}
void xoahang(int a[][100], int *rows, int cols, int row_delete){
    for(int i = row_delete; i < *rows; i++){
        for (int j = 0; j < cols; j++){
            a[i][j] = a[i+1][j];
        }
    }
    *rows -=1;
}
void xoacot(int a[][100], int rows, int *cols, int col_delete){
    for(int i = 0; i < rows; i++){
        for (int j = col_delete; j < *cols; j++){
            a[i][j] = a[i][j+1];
        }
    }
    *cols -=1;
}
int main()
{
    int rows, cols;
    int a[100][100];
    printf("Nhap so hang: "); scanf("%d", &rows);
    printf("Nhap so cot: "); scanf("%d", &cols);
    nhapmatran(a,rows,cols);
    xuatmatran(a,rows,cols);
    xoahang(a, &rows, cols, 1);
    //Xuat ma tran ket qua
    xuatmatran(a,rows,cols);
    xoacot(a,rows,&cols,1);
    xuatmatran(a,rows,cols);
    return 0;
}
