#include<bits/stdc++.h>
using namespace std;
#define PF           printf
#define SF(n)        scanf("%d", &n)
#define SFF(a,b)     scanf("%d %d", &a, &b)
#define SFFF(a,b,c)  scanf("%d %d %d", &a, &b, &c)
#define INF_I        2147483647    //max limit
#define INF          1999999999
#define PB           push_back
#define MEM(n, val)  memset((n), val, sizeof(n))
#define F            first
#define S            second
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define ROF(i, a, b) for(int i = a; i >= b; i--)
#define ALL(c)       c.begin(), c.end()
#define BOOST        std::ios_base::sync_with_stdio(false);
#define INP          freopen("in.txt", "r", stdin);
#define OUT          freopen("out.txt", "w", stdout);
#define MP           make_pair
#define INIT_RAND    srand(time(NULL))
#define MOD          1000000007
#define A_SZ         1000000
#define  a           10000000000005

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
typedef priority_queue<int> P_Q;
typedef stringstream SS;
//for direction Array
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int cell[1005][1005];
int visited[1005][1005];
int level[1005][1005];
int row,col,bomb,vr;
int sx,sy,dx,dy,br,r,c;
//grid bfs

void gridbfs(int sx,int sy)
{
    queue <PII> q;
    int flag=0;
    visited[sx][sy]=1;
    level[sx][sy]=0;
    q.push(make_pair(sx,sy));
    while(!q.empty()){
        PII top=q.front();
        q.pop();
        int x=top.F;
        int y=top.S;
        if(x==dx  && y==dy){
            //return level[x][y];
            cout << level[x][y] << "\n";
            //break;
            return;
        }
        FOR(l3,0,3){
            int tx=x+fx[l3];
            int ty=y+fy[l3];
            //cout<<tx<<ty<<endl;
            if(tx>=0  && tx<row && ty>=0  && ty<col && cell[tx][ty]!=-1  && visited[tx][ty]==0){
                visited[tx][ty]=1;
                level[tx][ty]=level[x][y]+1;
                q.push(make_pair(tx,ty));       //Pushing a new pair in the queue

        }
        }

    }
    cout<<level[dx][dy]<<endl;
}
int main()  {
    while(1){
        cin>>row>>col;
        if(row==0 && col==0){
            break;
        }
        else{
            cin>>br;
            FOR(l1,1,br){
                cin>>r>>bomb;
                FOR(l2,0,bomb-1){
                    cin>>c;
                    cell[r][c]=-1;//block cell
                }
            }
            cin>>sx>>sy;
            cin>>dx>>dy;
            gridbfs(sx,sy);
            FOR(l4,0,row){
                FOR(l5,0,col){
                    visited[l4][l5]=level[l4][l5]=cell[l4][l5]=0;
                }
            }
        }
    }

    return 0;
}
