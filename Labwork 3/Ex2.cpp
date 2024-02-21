#include <stdio.h>
#include <math.h>

//Method 1: Sieve of Eratosthenes:
bool isPrime[1000007];

void sieve(){
    for(int i = 0; i <= 1000000; i++){
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= sqrt(1000000); i++){
        if(isPrime[i]){
            for(int j = i * i; j <= 1000000; j += i){
                isPrime[j] = false;
            }
        }
    }
}


//Method 2: Function check a number is a prime?
bool checkPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return n > 1; //except case n = 1 is not prime number
}

int main(){
    sieve();
    printf("Please enter a natural number: ");
    int n; scanf("%d", &n);
    printf("All the prime numbers from 1 to %d are: ", n);
    for(int i = 2; i <= n; i++){
        if(isPrime[i]) printf("%d ", i);
    }

    // for(int i = 2; i <= n; i++){
    //     if(checkPrime(i)) 
    //         printf("%d ", i);
    // }

    //Method 3: Brute force (stupid =)) ):
    // bool found = true;
    // for(int i = 2; i <= n; i++){
    //     for(int j = 2; j <= i - 1; j++){
    //         if(i % j == 0) 
    //             found = false;
    //     }
    //     if(found == true) 
    //         printf("%d ", i);
    //     found = true;
    // }
}