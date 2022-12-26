#include <stdio.h>
#include <string.h>

// Ham doi mot tu 

// Input: 
// - Chuoi s, vi tri bat dau, vi tri ket thuc
// ex: Viet --> teiV
void reverse(char s[], int begin, int end)
{
    char temp;
    while (begin < end) {
        temp = s[begin];
        s[begin] = s[end];
        s[end] = temp;
        begin++;
        end--;
    }
}
 // Ham doi ca chuoi
 // 
void reverseWords(char s[])
{
	// Bien luu gia tri ban dau
    int begin_index = 0;
    // Bien chay
    int temp = 0;
    while (s[temp]) {
        temp++;
        if (s[temp] == '\0') { //Ket thuc chuoi
            reverse(s, begin_index , temp - 1);
        }
        else if (s[temp] == ' ') {//Gap dau cach
            reverse(s, begin_index, temp - 1);
            begin_index = temp + 1;
        }
    }
 	// Sau khi dao tat ca cac tu thi dao toan bo chuoi them mot lan nua
    reverse(s,0, strlen(s)-1);
}
 
// Driver Code
int main()
{
    char s[50];
    printf("Nhap chuoi: ");
    gets(s);
 
    // Driver code
    reverseWords(s);
    printf("%s", s);
    return 0;
}


//Test case:
// Input: toi yeu viet nam
// Output: nam viet yeu toi
