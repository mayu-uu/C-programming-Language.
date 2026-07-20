#include <stdio.h>

typedef long long ll;
typedef long double ld;
typedef double db;
typedef float fl;

int main(){
    ll n;
    printf("input number: ");
    scanf("%lld", &n);
    ll s=0;
    while(n>0){
        s+=(n%10);
        n/=10;
    }
    printf("sum of digits is: ");
    printf("%lld", s);
}
