#include <stdio.h>
#include <string.h>

void reverse(char* string){

    static int i, l, temptemporary_var;
    l = strlen(string);
    if (i < l / 2) {
        temptemporary_var = string[i];
        string[i] = string[l - i - 1];
        string[l - i - 1] = temptemporary_var;
        i++;
        reverse(string);
    }
}
int main()
{
    char  string[40];
    printf(" Enter the string: ");
    fgets(string, sizeof(string), stdin);
    printf("\nBefore reversing the string: %s", string);
    reverse(string);
    printf("After reversing the string: %s", string);


}