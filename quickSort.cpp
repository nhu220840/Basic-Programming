#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int partition(int a[], int l, int r){
    int pos = l - 1, pivot = a[r];
    for(int i = l; i < r; i++){
        if(a[i] <= pivot){
            pos++;
            swap(a[pos], a[i]);
        }
    }
    pos++;
    swap(a[pos], a[r]);
    return pos;
}

void quickSort(int a[], int l, int r){
    if(l < r){ 
        int p = partition(a, l, r);
        quickSort(a, l, p - 1);
        quickSort(a, p + 1, r);        
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    quickSort(a, 0, n - 1);
    for(int x : a) cout << x << " ";
}