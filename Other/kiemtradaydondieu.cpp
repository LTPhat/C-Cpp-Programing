#include<iostream>

using namespace std;
int a[10000];
int main(){
int n;
cin >> n;
for (int i = 0; i < n; i++){
	cin >> a[i];
	}
if (n==1){
	cout <<"YES";
}
bool check1=true; //Check day tang//
bool check2=true; //Check day giam//
for (int i = 0; i < n; i++){
	if (a[i] >= a[i-1]){
		check1 = false;
	}
		if (a[i] <= a[i-1]){
		check2 = false;
	}
}

if (check1 == true || check2 == true){
	cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
