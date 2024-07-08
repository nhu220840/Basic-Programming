#include <bits/stdc++.h>

using ll = long long;
using namespace std;

string addition(string a, string b){
    while(a.length() < b.length()){
        a = '0' + a;
    }
    while(a.length() > b.length()){
        b = '0' + b;
    }
    long long sum1 = 0;
    string sum = "";
    int carry = 0;
    for(int i = a.length() - 1; i >= 0; i--){
        sum1 = ((a[i] - '0') + (b[i] - '0') + carry);
        sum += (sum1 % 10 + '0');
        carry = sum1 / 10;
    }
    if(carry != 0){
        sum += (carry + '0');
    }
    reverse(sum.begin(), sum.end());
    return sum;
}

string F[1001];

void Fibo(){
    F[0] = "0", F[1] = "1";
    for(int i = 2; i <= 1000; i++){
        F[i] = addition(F[i - 1], F[i - 2]);
    }
}

    
int main(){
    Fibo();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}