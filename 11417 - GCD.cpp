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


int GCD(int a,int b){
    int c;
    while(a!=0){
        c=b%a;
        b=a;
        a=c;
    }
    return(b);
}

int main()
{
    int a,b,N;
    while(scanf("%d",&N) && N!=0)
    {
        ll G=0;
        for(a=1;a<N;a++)
        for(b=a+1;b<=N;b++)
        {
            G+=GCD(a,b);
        }
        printf("%lld\n",G);
    }
    return(0);
}
