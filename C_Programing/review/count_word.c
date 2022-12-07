#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100




int main(){
    char s[MAX];
    fgets(s, MAX, stdin);
    printf("Chuoi da nhap: ");
    puts(s);
    int count = 0;
    int i = 0;
    while(s[i] != '\0'){
        if (s[i] == '\n' || s[i] == ' ' || s[i] == '\t'){
            count++;
        }
        i++;
    }
        
    printf("\nNumber of words: %d", count);
    return 0;
}