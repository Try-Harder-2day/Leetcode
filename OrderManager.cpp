#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[1002];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    for(int j = i + 1; j < n; j++){
        if( a[i] > a[j] ){
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp; 
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    return 0;
}