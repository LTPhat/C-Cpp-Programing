#include<stdio.h>
#include<string.h>

int factorial(int n){
	if (n ==  1 || n == 0) {
		return 1;
	}
	return n * factorial(n-1);
}
int combine(int k, int n){
	return factorial(n)/(factorial(k)*factorial(n-k));
}
int main(){
		int n,k;
		do{
		printf("Nhap k: "); 
		scanf("%d", &k);
		printf("Nhap n: "); 
		scanf("%d",&n);
	}while(k > n || k < 0 || n == 0);
	printf("%d C %d = %d",n,k,combine(k,n));
	return 0;
}


 


