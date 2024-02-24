#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void bubbleSort(int a[], int n){
    bool isSorted = false;

    while(!isSorted){
        isSorted = true;
        for(int i = 0; i < n - 1; i++){
            if(a[i] > a[i + 1]){
                swap(a[i], a[i + 1]);
                isSorted = false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    bubbleSort(a, n);
    for(int x : a) cout << x << " ";
}