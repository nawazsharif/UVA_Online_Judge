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

const int              SZ  = 1e6+10;
const double           PI  = 2*acos(0.0);
const double           EPS = 1e-9;

int a,c,n,d,ans;
int binary(int a){
     c=0;
     while(a>0){
          n=a%2;
          a=a/2;
          if(n==1){
               c++;
          }
     }
     return c;
}


int dimical(int b){
     d=0;
     int p=0;
     while(b > 0){
          int k=(b%10);
          b=b/10;
          ans=k*pow(16,p++);
          a=a+ans;

     }

     while(a>0){
          n=a%2;
          a=a/2;
          if(n==1){
               d++;
          }
     }
     return d;
}

int main(){
    //R("input.txt");
    //W("output.txt");
    int n,m,t;
    cin >> t;
    while(t--){
         cin >> n;
         binary(n);
         dimical(n);
         printf("%d %d\n",c,d);
    }

    return 0;
}

