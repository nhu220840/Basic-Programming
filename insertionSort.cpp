#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void insertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int pos = i - 1, value = a[i];
        while(pos >= 0 && a[pos] > value){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = value;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    insertionSort(a, n);
    for(int x : a) cout << x << " ";
}