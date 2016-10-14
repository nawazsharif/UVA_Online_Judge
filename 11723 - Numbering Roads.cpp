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

int main()
{
      /* #ifndef ONLINE_JUDGE
         inpFile("input.txt");
         outFile("output.txt");
      #endif*/
      int n,r,s=1,ans;
      while(scanf("%d %d",&n, &r)!=EOF)
      {
          ans=0;
          if(n==0 && r==0)
            break;
          ans=(n-1)/r;
          if(ans>26)
          {
              printf("Case %d: impossible\n",s++);
          }
          else{printf("Case %d: %d\n",s++,ans);}

      }

    return 0;
}
