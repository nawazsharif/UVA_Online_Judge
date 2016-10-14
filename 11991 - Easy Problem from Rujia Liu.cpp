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
const long long int SIZE =1000005;


int main()
{
      /* #ifndef ONLINE_JUDGE
         inpFile("input.txt");
         outFile("output.txt");
      #endif*/

      int n,m,i,j,p,q,c;
      vector <vector<int> > v;

      while(scanf("%d %d",&m,&n)==2)
      {
          v.assign(1000010,vector<int>());

          for(int i=1;i<=m;i++)
          {
              scanf("%d",&j);
              v[j].push_back(i);
          }

          for(i=0;i<n;i++)
          {
              scanf("%d%d",&p,&q);

              if(v[q].size() > p-1)
                printf ("%d\n", v[q][p-1]);
              else
                printf("0\n");

          }


      }



    return 0;
}
