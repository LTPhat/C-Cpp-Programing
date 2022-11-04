#include<bits/stdc++.h>

using namespace std;


void Find_n_cows(int a[], int n, int S){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (sum - (a[i] + a[j]) == S){
                a[i] = -1;
                a[j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++){
        if (a[i] != -1){
            cout<< a[i]<< " ";
        }
    }

    
}
int main(){
    int n, S;
    cin >> n;
    cin >> S;
    int a[n+2];
    for (int i = 0; i < n + 2; i++){
        cin >> a[i];
    }
    
    Find_n_cows(a, n+2, S);
    return 0;
}