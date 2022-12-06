/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int check_str(char s[]){
    for (int i = 0; i < strlen(s)/2; i++){
        if (s[i] != s[strlen(s)-i-2]){
            return 0;
        }
    }
    return 1;
}
int main()
{
    char s[50];
    printf("Nhap chuoi: ");
    fgets(s,50,stdin); 
    
    printf("Len: %ld", strlen(s));
    printf("\n");
    if(check_str(s) == 1){
        printf("Chuoi doi xung");
    }else{
        printf("Chuoi khong doi xung");
        }
    return 0;
}
