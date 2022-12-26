#include <stdio.h>
#include <string.h>
int checkdoixung(char s[]){
	int i;
	for (i = 0; i < strlen(s)/2; i++){
		if (s[i] != s[strlen(s)-i-1]){
		return 0;
		}
	}
	return 1;
}
int main(){
	char s[50];
	printf("Nhap chuoi: ");
	gets(s);
	if (checkdoixung(s) == 1){
		printf("\nChuoi doi xung");
	}else{
		printf("\nChuoi khong doi xung");
	}
	return 0;
}
