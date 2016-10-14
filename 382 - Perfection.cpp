#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <map>
#include <stack>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <list>
#include <iterator>
#include <fstream>
#include<bits/stdc++.h>

using namespace std;

#define sq(x) ((x)*(x))
#define mset(x,n) memset((x),(n),sizeof((x)))
#define inpFile(f) freopen(f, "r", stdin)
#define outFile(f) freopen(f, "w", stdout)
const double PI = acos(-1);
#define REP(i,n) for( int i=0,_e(n); i<_e; i++ )
#define FOR(i,a,b) for( int i=(a),_e(b); i<=_e; i++ )
#define pf(x) cout << (x)<< endl
#define sf(x) scanf("%d",&x)


int main()
{
         inpFile("input.txt");
         outFile("output.txt");

         int n,t,ans;
         pf("PERFECTION OUTPUT");
         while(scanf("%d",&n)==1)
         {
             if(n==0)
             {
                pf("END OF OUTPUT");
                break;
             }
             ans=0;
             FOR(i ,1,n/2)
             {
               if(n%i==0)
                 {
                     ans+=i;
                 }
             }


    if(ans==n)
        {
            printf("%5d  PERFECT\n",n);
        }
    else if(ans<n)
        {
            printf("%5d  DEFICIENT\n",n);
        }
    else
        {
            printf("%5d  ABUNDANT\n",n);
        }

         }




    return 0;
}

