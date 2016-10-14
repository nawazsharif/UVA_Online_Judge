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
const int              SZ  = 1e6+10;
const double           PI  = 2*acos(0.0);
const double           EPS = 1e-9;

long long num;
const int sz=1e8;
int temp[sz];
int prime[sz];
int nop;
int cnt;
int factor[20];
int power[20];
int push;
int tempn;
int fsz,div1[70010];


void seive(){
	int sqrt_n = sqrt(double(sz));
	for (int i = 3; i <= sqrt_n; i += 2){
		if (temp[i] == 0){
			for (int j = i*i; j<sz; j += 2 * i){
				temp[j] = 1;
			}
		}
	}
	prime[nop++] = 2;
	for (int i = 3; i<sz; i += 2){
		if (temp[i] == 0){
			prime[nop++] = i;
		}
	}
}

void primefactorization(ll n){
    int sq=sqrt(n);
    for(int i=0; prime[i]<=sq && i<sz;  i++){

        if(n%prime[i]==0){
           cnt=0;
            while(n%prime[i]==0){
                cnt++;
                n/=prime[i];
            }
            if(prime[i]!=2){
            factor[push]=prime[i];
            power[push]=cnt;
            push++;
            }
            sq=sqrt(n);
        }
    }
    if(n>1){
        factor[push]=n;
        power[push]=1;
        push++;
    }
    fsz=push;


}


int divisor()
{
    int x=1,i,j,k,t=1,d=1;
    div1[0]=1;
    for(int i=0;i<fsz;i++){
        x=1;
        t=d;
        for(j=0;j<power[i];j++){
            x=x*factor[i];
            for(k=0; k<t;k++){
                div1[d++]=div1[k]*x;
            }
        }
    }
    return d;
}



int main()  {
    seive();
    ll t;
    while (cin>>num){
        primefactorization(num);
        cout<<divisor()<<endl;
        push=0;

    }
    return 0;
}
