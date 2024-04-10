#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void merge(int a[], int l, int mid, int r){
    int n1 = mid - l + 1, n2 = r - mid;
    int left[n1], right[n2];
    
    for(int i = 0; i < n1; i++){
        left[i] = a[l + i];
    }
    for(int i = 0; i < n2; i++){
        right[i] = a[mid + 1 + i];
    }

    int idx = l;
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(left[i] < right[j]){
            a[idx++] = left[i++];
        }
        else{
            a[idx++] = right[j++];
        }
    }

    while(i < n1){
        a[idx++] = left[i++];
    }
    while(j < n2){
        a[idx++] = right[j++];
    }
}

void mergeSort(int a[], int l, int r){
    if(l < r){
        int mid = (l + r) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

// void merge(vector <int> &a, int l, int mid, int r){
//     vector<int> left(a.begin() + l, a.begin() + mid + 1);
//     vector<int> right(a.begin() + mid + 1, a.begin() + r + 1);

//     int idx = l;
//     int i = 0, j = 0;
//     while(i < left.size() && j < right.size()){
//         if(left[i] < right[j]){
//             a[idx++] = left[i++];
//         }
//         else{
//             a[idx++] = right[j++];
//         }
//     }

//     while(i < left.size()){
//         a[idx++] = left[i++];
//     }

//     while(j < right.size()){
//         a[idx++] = right[j++];
//     }
// }


// void mergeSort(vector <int> &a, int l, int r){
//     if(l < r){
//         int mid = (l + r) / 2;

//         mergeSort(a, l, mid);
//         mergeSort(a, mid + 1, r);
//         merge(a, l, mid, r);
//     }
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    mergeSort(a, 0, n - 1);
    for(int x : a) cout << x << " ";
}