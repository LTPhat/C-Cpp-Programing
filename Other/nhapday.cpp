#include<iostream>
#include<math.h>
using namespace std;
int a[10000], b[10000], c[10000];
int main(){
	int m,n;
	cout << "Input the second array" <<endl;
	cout << "Input the number of elements:";
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << "Input the second array" <<endl;
	cout << "Input the number of elements:";
    cin >> m;
	for (int i = 0; i < m; i++){
		cin >> b[i];
	}
	int size = 0;
	int i = 0, j = 0;
	while (i < n && j < m){
		if (a[i] < b[j]){
			c[size] = a[i];
			size +=1;
			i +=1;
		}else{
			c[size] = b[j];
			size +=1;
			j +=1;
		}
	}
	while (i < n){
	c[size] = a[i];
			size +=1;
			i +=1;
	}
	while (j < m){
	c[size] = b[j];
			size +=1;
			j +=1;
	}
	cout << "The emerged array with incremental order is: ";
	for (int i = 0; i < size; i++){
		cout << c[i] << " ";
		}
		return 0;
}

