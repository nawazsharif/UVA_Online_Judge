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

int main()
 {
   int num,t;
   string s;
   cin>>t;
   while(t--)
   {
     cin>>s;
     int len=s.length();
     for(int i=1;i<=len;i++)
     {
       string concat="";
       string p=s.substr(0,i);

       int pl=p.length();
       for(int i=1;i<=len/pl;i++){
          concat=concat+p;
       }
       if(concat==s)
       {
          cout<<pl<<"\n";
          break;
       }
     }
     //if(t)cout<<"\n";
   }
   return 0;
 }
