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

int ab1=0,ab2=0,ab3=0,len=0;

template <class T>
inline std::string to_string (const T& t)
{
    std::stringstream ss;
    ss << t;
    return ss.str();
}
int p=0,arr[10000];

void reversechar (int l,string a){
    for(int j=l-1;j>=0;j--){
        arr[p++]=a[j];
        cout << a[j];
    }
}



void reverseint(int l, string a){

    for(int i=l-1;i>=0;i--){
        if(a[i]=='1'){

            ab1=a[i]-'0';
            ab2 =a[i-1]-'0';
            ab3=a[i-2]-'0';
            int ans= (ab1*100) +(ab2*10)+ ab3;
            cout << (char)ans;
            i=i-2;

        }

        else{
            ab1=a[i]-'0';
            ab2 =a[i-1]-'0';
            int ans= (ab1*10) +ab2;
            cout << (char)ans;
            i=i-1;
            //cout << i << endl;
        }
    }
}

int main(){
    W("test.txt");
    string str;
    int ab1=0,ab2=0,ab3=0;
    while(getline(cin,str)){

        int len = str.length();
        //cout << len << endl;
        if(str[0]>='0' && str[0]<='9'){
            reverseint(len,str);
            cout << endl;
        }
        else{
            for(int i = len-1; i >= 0;i-- ){
                int ans =str[i]-0;
                string b= to_string(ans);
                int blen= b.length();
                reversechar(blen,b);
            }
            cout << endl;
        }
    }



}

/*
#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
int x,y,i,j,d;
char f;
string a,c,e,m;

while(getline(cin,a))
    {
    if(a[0]-'0'>=0 && a[0]-'0'<=9)
        {
        e="\0";
        for(i=0;i<a.length();i++)
            {
            m="\0";
            if((a[i+1]-'0')>=3) {
                              d=((a[i+1]-'0'))*10+(a[i]-'0');
                              f=d;
                              m+=f;
                              i++;
                              }
           else{
                d=((a[i+2]-'0'))*100+((a[i+1]-'0'))*10+(a[i]-'0');
                f=d;
                m+=f;
                i+=2;
                }
            e+=m;
            }
        for(i=e.length()-1;i>=0;i--)
            {
            cout<<e[i];
            }
        }
        else {
            for(i=a.length()-1;i>=0;i--)
                {
                e="\0";
                x=a[i];
                stringstream h;
                h<<x;
                c=h.str();
                for(j=c.length()-1;j>=0;j--)
                    e+=c[j];
                cout<<e;
                }
            }
    cout<<endl;
    }

return 0;
}*/
