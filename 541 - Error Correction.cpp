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
       #ifndef ONLINE_JUDGE
         inpFile("input.txt");
         outFile("output.txt");
      #endif
      int n,t,sum,d,e,f,c,s;
      while(scanf("%d",&n)==1)
      {
          if(n==0)
            break;

          d=0,e=0,f=0,s=0,c=0;
          int a[101][101];

      for(int i=1;i<=n;i++)

       {
          for(int j=1;j<=n;j++)

           {
              scanf("%d",&a[i][j]);
           }
       }

      for(int i=1;i<=n;i++)
      {
          sum=0;
          for(int j=1;j<=n;j++)

         {
              sum+=a[i][j];
         }
         //cout << sum << endl;

          if(sum%2!=0)

          {
              c=i;
              e++;
          }
      }

      for(int j=1;j<=n;j++)
      {
          s=0;
          for(int i=1;i<=n;i++)
          {
              s+=a[i][j];
          }
          //cout << s << endl;
          if(s%2!=0)
          {
              d=j;
              f++;
          }
      }
      //printf("%d %d",c,d);


      if(e==0 && f==0)

      {
          printf("OK\n");
      }



      else if(e==1&& f==1)

       {
          printf("Change bit (%d,%d)\n",c,d);
       }

      else

       {
         printf("Corrupt\n");
       }
    }


    return 0;
}

