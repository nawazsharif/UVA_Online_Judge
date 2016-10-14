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

      long int q,valu,test,line,k,i,j,y[200];
      char a[10000],x[200];
      double ans;
      while(scanf("%ld\n",&test)==1)
      {
          while(test--)
          {

          ans=0;
          scanf("%ld\n",&k);
          for(i=0;i<k;i++)
          {
              scanf("%c %ld\n",&x[i],&y[i]);
          }
          scanf("%d",&line);
          //cout << line << endl;

          for(i=0;i<=line;i++)
          {
              gets(a);
              int len=strlen(a);
              for(int p=0;p<k;p++)
              {
                 for(j=0;j<len;j++)
                 {
                     if(x[p]==a[j])
                        ans+=y[p];
                 }
              }

          }

          printf("%.2lf$\n",ans/100);
      }
      }

    return 0;
}


