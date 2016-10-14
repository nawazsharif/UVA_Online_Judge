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

int main()
{
      /* #ifndef ONLINE_JUDGE
         inpFile("input.txt");
         outFile("output.txt");
      #endif*/
      int h,V,a,b,u,v,s,A;

      while(scanf("%d %d %d %d %d",&a,&b,&v,&A,&s)==5)
      {
          if(a==0 && b==0 && v==0 && s== 0 && A==0)
            break;
          V=(b+v*s*sin((A*PI)/180))/(2*b);
          h=(a+v*s*cos((A*PI)/180))/(2*a);

          printf("%d %d\n",h,V);
      }

    return 0;
}

