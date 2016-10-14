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
      int n,m,i,j,k,t=0;
      int a[10000] ,b[10000];
      while(scanf("%d %d",&n,&m)==2)
      {
          if(n==0 && m==0)
            break;
          k=0;
          for(i=0;i<n;i++)
            scanf("%d",&a[i]);

          for(j=0;j<m;j++)
            scanf("%d",&b[j]);

              printf("CASE# %d:\n",++t);

              sort(a,a+n);

              for(i=0;i<m;i++)
              {
                  k=0;
                   for(j=0;j<n;j++)
                     {
                          if(b[i]==a[j]&&k!=1)
                     {
                          printf("%d found at %d\n",b[i],j+1);
                           k=1;
                }
            }
            if(k==0)printf("%d not found\n",b[i]);
        }
      }

    return 0;
}
