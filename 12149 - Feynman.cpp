#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    /*static unsigned n;

    while(scanf("%u",&n) && n)
        printf("%u\n", n * (n + 1) * (2 * n + 1 ) / 6 );*/
        int n, sum;
        while(scanf("%d",&n)==1)
        {
            sum=0;
            if(n==0)
                break;
            else
            {
            for(int i=1;i<=n;i++)
            {
                sum+=pow(i,2);
            }
            cout << sum<< endl;
        }
        }

    return 0;
}
