#include <stdio.h>
#include <string.h>
void split(char *str1){
    char newString[10][10];
    int i,j,ctr;
    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str1[i]==' '||str1[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }
    printf("\n Strings or words after split by space are :\n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);
}
int main()
{
    char str1[100];
    int i,j,ctr;
    printf(" Input  a string : ");
    fgets(str1, sizeof str1, stdin);
    split(str1);
    return 0;
}