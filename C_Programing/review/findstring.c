/*
Nhap vao chuoi 1, chuoi 2. Tra ve chuoi 2 co thuoc chuoi 1 hay khong, in ra vi tri cua chuoi 2 nam trong chuoi 1.
*/

#include <stdio.h>
#include <string.h>

int findSubtring(char str[], char substr[]){
	int index = 0;
	int i = 0;
	while (i < strlen(str)){
		if (str[i] == substr[index]){
			int find = i;
			while ((str[i] == substr[index]) && substr[index] !='\0'){
				index++;
				i++;
			}
			if(index == strlen(substr)){
				return find;
			}else{
				index = 0;
			}
		}else{
			i++;
		}
	}
	return 0;
}

int main(){
	char s1[50];
	char s2[20];
	do{
		printf("Nhap chuoi thu nhat: ");
		gets(s1);
		printf("\nNhap chuoi thu hai: ");
		gets(s2);
	}while (strlen(s2) > strlen(s1));
	if(findSubtring(s1,s2) != -1){
		printf("\nChuoi thu hai nam o vi tri %d trong chuoi thu nhat ",findSubtring(s1,s2));
	}else{
		printf("\nKhong tim thay chuoi thu hai trong chuoi thu nhat");
	}
	return 0;
}
