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
#define sf(x) cin >> (x)
#define SIZE 105

vector<int>V[SIZE];
int visit[SIZE];
int inc;



void DFS(int u)
{
    int len = V[u].size();
    int v;
    for(int i=0; i<len;i++)
    {
        v = V[u][i];
        if( ! visit[v] )
        {
            visit[v] = 1;
            inc--;
            DFS(v);
        }

    }

}



int main()
{

    int number_of_nodes, n;
    int node1, node2;
    while(1)
    {
        sf(n);
        if(n == 0) break;

        for(int i=0;i<=n;i++)
        {
            V[i].clear();
        }
        while(1)
        {
            sf(node1);

            if(node1 == 0) break;

            while(1)
            {
                sf(node2);
                if(node2 == 0) break;
                V[node1].push_back(node2);
            }
        }

        sf(number_of_nodes);

        for(int t=0;t<number_of_nodes;t++)
        {
            for(int i=0;i<=n;i++)
            {
                visit[i] = 0;
            }
            sf(node1);
            inc = n;
            DFS(node1);

            cout<<inc;

            for(int j=1; j<=n; j++)
            {
                if( ! visit[j] )
                {
                    cout<<" "<<j;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
