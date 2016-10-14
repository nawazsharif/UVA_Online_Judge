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
typedef vector<int> V;
typedef pair<int,int> PII;
typedef vector< PII > VII;

const int              SZ  = 1e5+10;
const double           PI  = 2*acos(0.0);
const double           EPS = 1e-9;

int main(){
    //R("input.txt");
    //W("output.txt");
    ll b,c,n,sum=0;
    int a[SZ];
    ll max=0;
    while(cin >> n){
            sum=0;
            if(n==0)break;
        FOR(i,0,n){
            cin >> a[i];
            sum=sum+a[i];
    //cout << sum << endl;
            b=sum;
            if(b > max){
                swap(b,max);
            }
            if(sum<0){
                sum=0;
            }
        }
        if(max>0){
            cout << "The maximum winning streak is "<< max <<"."<< endl;
            max=0;
            sum=0;
        }
        else{

            cout << "Losing streak." << endl;
        max=0;
        sum=0;
        }

    }


    return 0;
}
//7 2 4 -6 3 2 6 -10
