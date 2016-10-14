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

const int              SZ  = 1e5+10;
const double           PI  = 2*acos(0.0);
const double           EPS = 1e-9;

/*int temp[sz];
void seive(){
    int i,j;
    for(i=4;i<sz;i+=2){
        temp[i]=1;    }
    FOR(i,3,sz){
        if(temp[i]==0){
            for(j=i*i;j<sz;j+=2*i){
                temp[j]=1;
                //cout << j<< endl;

            }
        }
    }
}*/

int main(){
    //R("input.txt");
    //W("output.txt");
    int n,p,q;
    char arr1[SZ],arr2[SZ];
    string a,b;
    cin >> n ;
    FOR(i,0,n){
        p=0,q=0;
        mset(arr1,0);
        mset(arr2,0);
        cin >> a;
        int len1 = a.length();
        //cout << len1<< endl;
        cin >> b;
        int len2 = b.length();

        if(len1!=len2){
            cout << "No"<< endl;
            continue;
        }

        else{
            FOR(j,0,len1){
                if(a[j]=='a' || a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u'){
                    continue;
                }
                else
                    arr1[q++]=a[j];
            }


            FOR(k,0,len2){
                if(b[k]=='a' || b[k]=='e'||b[k]=='i'||b[k]=='o'||b[k]=='u'){
                    continue;
                }
                else
                    arr2[p++]=b[k];

            }

            if(strcmp(arr1,arr2)==0){
                cout << "Yes" << endl;
            }

            else
                cout << "No"<< endl;
        }
    }



    return 0;
}
