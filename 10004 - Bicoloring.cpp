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
typedef unsigned long long ull;

const int              sz  = 1e6+10;
const double           PI  = 2*acos(0.0);
const double           EPS = 1e-9;

vector <int> g[sz];
queue <int> q;
int visited[sz];
int colour[sz];

void BFS(int root){
     int flag =0;
     visited[root]=1;
     colour[root]=1;
     q.push(root);

     while(!q.empty()){
          int u=q.front();
          //cout << "u : " <<u << endl;
          if(colour[u]==0){
               colour[u]=1;
          }
          int k =g[u].size();
          FOR(i,0,k){
               int v=g[u][i];
               if(!visited[v]){
                    visited[v]=1;
                    colour[v]=colour[u]+1;
                    q.push(v);
               }
               else{
                   if(colour[u]==colour[v]){
                        flag=1;
                        break;
                   }
               }
          }

          q.pop();
          if(flag==1){
            while(!q.empty()){
            q.pop();
            }
          }
     }

     if(flag==1){
        printf("NOT BICOLORABLE.\n");
     }
     else{
         printf("BICOLORABLE.\n");
     }
}

int main()
{
     //W("test.txt");
    int node,edge;  //number of nodes and edge
    int x,y,src;
    while(1){
            mset(visited,0);
            mset(colour,0);

         scanf("%d",&node);
         if(node==0){
            break;
         }
         else{
            scanf("%d",&edge);
            scanf("%d %d",&x,&y);
            g[x].push_back(y);
            g[y].push_back(x);
            src=x;
            for(int i=1;i<edge;i++){
               scanf("%d %d",&x,&y);
               g[x].push_back(y);
               g[y].push_back(x);
            }

            BFS(src);

         }

         for(int i=0;i<node+2;i++){
            g[i].clear();
         }
    }
    return 0;
}
