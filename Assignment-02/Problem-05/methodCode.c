#include <stdio.h>

typedef long long ll;
typedef long double ld;
typedef double db;
typedef float fl;

int main(){
    ll n;
    printf("input number: ");
    scanf("%lld", &n);
    ll x=0;
    for(ll i=1; i =n; i +){
        x+=(i*(i+1));
    }
    printf("sum is: ");
    printf("%lld", x);
}