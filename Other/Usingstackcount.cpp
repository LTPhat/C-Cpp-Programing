#include<iostream>
#include<stack>

using namespace std;

int main(){
	int c = 0;
	stack <int> mystack;
	mystack.push(0);
	mystack.push(1);
	mystack.push(2);
	mystack.push(3);
	mystack.push(4);
	mystack.push(5);
	while (!mystack.empty()){
		mystack.pop();
		c++;
	}
	cout<< "The number of element of stack: " << c;
}
