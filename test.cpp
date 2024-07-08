#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll largestNumber(ll a[], int n, int index, ll maxNum = -1e9){
    if(index >= n)
        return maxNum;
    if(a[index] > maxNum)
        maxNum = a[index];
    return largestNumber(a, n, maxNum, index + 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    cout << largestNumber(a, n, 0);
}