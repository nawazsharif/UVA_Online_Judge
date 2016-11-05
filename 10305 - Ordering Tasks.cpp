
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

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> V;
typedef pair<int,int> PII;
typedef vector< PII > VII;
#define sz 10000



int node , edge, u,v;
vector <int> g[sz];
int visit[sz],color[sz],dis[sz],fin[sz],tim=1;
vector <int> q;

void dfs(int root){

    visit[root]=1;
    dis[root]=tim++;
    int n= g[root].size();
    FOR(i,0,n){
        int x= g[root][i];
        if(!visit[x]){
            dfs(x);
        }
    }
    fin[root]=tim++;
    q.pb(root);
}

int main(){
    int a ,b;
    while(1){
        mset(visit,0);
        mset(dis,0);
        cin >> node >> edge;
        if(node==0 && edge==0){
            break;
        }

        else{
            FORE(i,1,edge){
                cin >> a >> b;
                g[a].pb(b);
                //g[b].pb(a);
            }
            FORE(j,1,node) {
                if(!visit[j]) {
                    dfs(j);
                }
            }

            int t_siz=q.size()-1;
            //cout << t_siz << endl;
            for(int j=t_siz;j>=0;j--){
                //pf("%d ",fin[j]);
                pf("%d ",q[j]);

            }
            FOR(i,0,node){
                g[i].clear();
                q.clear();
            }
            cout << endl;
        }
    }
}

