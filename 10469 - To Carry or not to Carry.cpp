#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    long long int a,b,s;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        s=(a^b);
        printf("%lld\n",s);
    }


    return 0;
}
