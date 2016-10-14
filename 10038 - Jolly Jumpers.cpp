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
      int n,test,t,i,j,arr[3010],b[3010];
      while(scanf("%d",&n)==1)
      {
          int c=0;
          for(i=0;i<n;i++)
          {
              scanf("%d",&arr[i]);
          }
          for(j=0;j<n-1;j++)
          {
              b[j]=abs(arr[j+1]-arr[j]);
          }
          sort(b,b+j);
          for(i=1;i<n;i++)
          {
              if(b[i-1]==b[i])
              {
                  c=1;
                  break;
              }
          }
          if(c==1)
          {
              printf("Not jolly\n");
          }


          else
          {
              printf("Jolly\n");
          }

      }

    return 0;
}
