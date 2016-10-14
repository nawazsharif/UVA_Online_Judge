#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

long long H(int n)
{
    long long res=0;
    int sqr=double(sqrt(n)),i=1;
    for(;i<sqr+1;i++)
    {
        res=(res+n/i);
    }
   /* if (n / sqr > sqr) {
        res += sqr;
    }*/
    res=2*res-sqr*sqr;

 return res;
}


int main(){
    int t;long long n;
    scanf("%d", &t);
    while(t--){
        scanf("%lld",&n);
        printf("%lld\n", H(n));
    }
    return 0;
}
