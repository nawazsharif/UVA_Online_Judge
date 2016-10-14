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

    int n, tc, x, xx, y, yy;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        cin>>x>>y;
        for(int i=0;i<n;i++)
        {
            cin>>xx>>yy;

            if(xx==x || yy==y) cout<<"divisa\n";
            else if(xx>x && yy>y) cout<<"NE\n";
            else if(xx<x && yy>y) cout<<"NO\n";
            else if(xx>x && yy<y) cout<<"SE\n";
            else cout<<"SO\n";

        }
    }



    return 0;
}
