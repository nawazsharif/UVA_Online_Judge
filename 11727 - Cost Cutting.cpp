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
#define INP(f) freopen(f, "r", stdin)
#define OUP(f) freopen(f, "w", stdout)
const double PI = acos(-1);
#define REP(i,n) for( int i=0,_e(n); i<_e; i++ )
#define FOR(i,a,b) for( int i=(a),_e(b); i<=_e; i++ )
#define pf(x) cout << (x)


int main()
{
int a,b,c,n,d,i;
while(scanf("%d",&n)==1)
{
for(i=1;i<=n;i++)
 {
 scanf("%d%d%d",&a,&b,&c);

 if(a>b && b>c || a<b && b<c)
    d=b;
 if(a>c && c>b || a<c && c<b)
    d=c;
 if(b>a && a>c || b<a && a<c)
    d=a;

 printf("Case %d: %d\n",i,d);
 }

}

return 0;
}
