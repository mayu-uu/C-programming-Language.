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
        while(n>0){
        x*=10;
        x+=n%10;
        n/=10;
    }
    printf("reverserd number: ");
    printf("%lld", x);
}