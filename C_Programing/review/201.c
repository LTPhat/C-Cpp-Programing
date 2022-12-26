#include<stdio.h>
#include<string.h>
char func1(char a)
{
char b,s;
for(b=1,s=0;b;b<<=1){
if(a&b)
s++;
}
return s;	
}
int main(){
//	int x = 8, y = 1;

//char a[10]={'a','b','c','d','e','f','g','h','i','j'};
//char i=0,x=0;
//while(a[i]&3)
//x+=a[i++]%2;
//printf("\n%d %d",i,x);
//	char s[100];
//	printf("Nhap chuoi ky tu: ");
//	gets(s);
//	printf("%d", strlen(s));
//	int i,j;
//	for (i = 0; i < strlen(s); i++){
//		for(j = i+1; j < strlen(s); j++){
//			if (s[j] < s[i]){
//				char temp = s[i];
//				s[i] = s[j];
//				s[j] = temp;
//			}
//		}
//	}
//	printf("\nChuoi sau khi sap xep: ");
//	puts(s);
//	int a = 3;
//	int b = 1;
//	int n = --a;
//	int m = a++;
//	printf("%d", n);
//	printf("\n%d", m);
//	printf("\n%d", a);
//	printf("\n%d", n);
//	int n=92, m=11, t= --n/m, u= m+n+t;
//	printf("%d",u);
//	printf("\n%d", t);
//	printf("%d", n);
//int x = 8, y = 1;
////int c = x++;
//int d = ++y;
//int e = y++;
//printf("%d", d);
//printf("%d", e);
//printf("%d", ++y);

//switch(x--,y++)
//{
//case 1:
//x*=8;
//printf("%d",x);
//printf("\n%d", y);
//case 2:
//y*=x/=2;
//printf("\n Case 2 x: %d",x);
//printf("\n Case 2 y:%d", y);
//case 3:
//case 4:
//y--;
//printf("\n Case 4 x:%d",x);
//printf("\n Case 5 y:%d", y);
//default:
//x+=5;
//printf("\n Case 5 x:%d",x);
//printf("\n Case 5 x:%d", y);
//}
//printf("\n%d %d",x,y);
//
////int b = 1;
////printf("%d", b<<=1);
//int main()
//{
//int *x;
//*x=100;
//return 0;
//}
//printf("%d", addmult(3,4));
//int i=-3, j=2, k=0, m;
//m = ++i && ++j || ++k;
//printf("%d, %d, %d, %d\n", i, j, k,
//m);
//unsigned int i = 10;
//int b = ++i;
////int c = i++;
////printf("i = %d",i);
//printf("\nb = %d",b);
////printf("\nc = %d",c);
//printf("\ni = %d", i);
char c = 48;
int mask = 01;
int i;
for (i = 1; i<5;i++){
	printf("%c", c|mask);
	mask <<=1;
}
return 0;
}

