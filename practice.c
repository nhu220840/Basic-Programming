#include <stdio.h>
#include <math.h>
#define ll long long

int isPrime(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int sumDigits(ll n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int sumEvenDigits(ll n){
    int sum = 0;
    while(n){
        int r = n % 10;
        if(r % 2 == 0){
            sum += r;
        }
        n /= 10;
    }
    return sum;
}

int sumPrimeDigits(ll n){
    int sum = 0;
    while(n){
        int r = n % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7)
            sum += r;
        n /= 10;
    }
    return sum;
}

ll reverseNumber(ll n){
    ll rev = 0;
    while(n){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int countPrimeDivisors(ll n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n != 1) cnt++;
    return cnt;
}

int largestPrimeDivisor(ll n){
    int maxPrimeDivisor = -1e9;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            maxPrimeDivisor = fmax(maxPrimeDivisor, i);
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n != 1) maxPrimeDivisor = n;
    return maxPrimeDivisor;
}

int checkAtLeast1_6(ll n){
    while(n){
        if(n % 10 == 6){
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int sumDigitsDivisibleBy8(ll n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum % 8 == 0;
}

ll sumFactorial(ll n){
    ll sum = 0;
    while(n){
        ll factorial = 1;
        int r = n % 10;
        for(int i = 1; i <= r; i++){
            factorial *= i;
        } 
        sum += factorial;
        n /= 10;
    }
    return sum;
}

int checkNumberContainSameDigits(ll n){
    int lastDigit = n % 10;
    n /= 10;
    while(n){
        if(n % 10 != lastDigit)
            return 0;
        n /= 10;
    }
    return 1;
}

int checkLastDigitIsLargest(ll n){
    int lastDigit = n % 10;
    n /= 10;
    while(n){
        if(n % 10 > lastDigit)
            return 0;
        n /= 10;
    }
    return 1;
}

ll sumPowerOfNumberOfDigits(ll n){
    int count_digits = 0;
    int tmp = n;
    while(tmp){
        count_digits++;
        tmp /= 10;
    }
    ll sum = 0;
    while(n){
        int r = n % 10;
        sum += pow(r, count_digits);
        n /= 10;
    }
    return sum;
}

int main(){
    ll n; scanf("%lld", &n);
    printf("%d", sumPowerOfNumberOfDigits(n));
}