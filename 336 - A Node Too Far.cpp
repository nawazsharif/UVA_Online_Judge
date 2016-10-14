#include <bits/stdc++.h>

using namespace std;
#define R(f)           freopen( (f), "r", stdin )
#define W(f)           freopen( (f), "w", stdout )
#define pf             printf
#define sf             scanf
#define pfi(x)         printf("%d\n",x)
#define pfs()          printf(" ")
#define pfl()          println("\n")
#define sfd(x)         scanf("%lf",&x)
#define sfi(x)         scanf("%d\n",&x)
#define take_LL(_x)    scanf(LLId, &_x)
#define FOR(i,a,n)     for(int i=a; i<n; i++)
#define FORE(i,a,n)    for(int i=a; i<=n; i++)
#define REV(i,n,a)     for(int i=n; i>=a; i--)
#define pb             push_back
#define mset(x,n)      memset(x,n,sizeof(x))

typedef long long ll;
typedef unsigned long long ULL;
typedef vector<ll> V;
typedef pair<int,int> PII;
typedef vector< PII > VII;
#define sz 100010

map <int,int> visited;

void bfs(int start, map <int,vector<int> > graph) {
    queue<int> s;
    s.push(start);
    visited[start]=0;
    while (s.empty() == false) {
        int top = s.front();
        s.pop();
        int size = graph[top].size();
        for(int i=0;i<size;i++){
            int n =graph[top][i];
            if(!visited.count(n)){ //I've already been here.
                visited[n]=visited[top]+1; //Number of moves until here + 1
                s.push(n);
            }
        }
     }
}


int main(){
    int nods,a,b,cases=1;
    while(scanf("%d",&nods) && nods){
             map <int,vector<int> > graph;
             for(int i=0;i<nods;i++){
                     scanf("%d %d",&a,&b);
                     graph[a].push_back(b);
                     graph[b].push_back(a);
             }

             int ttl,start;
             while(scanf("%d %d",&start,&ttl) && (start!=0 || ttl!=0)){
                map <int,int>::const_iterator itr;
                visited.clear();
                bfs(start,graph);
                int result = 0;
                 for(itr = visited.begin(); itr != visited.end(); ++itr){
                    if((*itr).second>ttl)++result;
                 }
                 result += graph.size()-visited.size(); //Aaaaaah!!! The graph could has no connected nodes
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cases,result,start,ttl);
                cases++;
             }

    }
 return 0;

}
