#include<stdio.h>


int main(){
	int contestants[] ={1,2,3};
	int *choice = contestants;	
	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choice;
	printf("I will choose the contestant number %d\n", contestants[2]);
	printf("%d\n",contestants[1]);
	return 0;
}
