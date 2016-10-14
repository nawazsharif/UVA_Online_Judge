#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <map>
#include <stack>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <list>
#include <iterator>
#include <fstream>
#include<bits/stdc++.h>

using namespace std;

#define sq(x) ((x)*(x))
#define mset(x,n) memset((x),(n),sizeof((x)))
#define inprintfile(f) freopen(f, "r", stdin)
#define outFile(f) freopen(f, "w", stdout)
const double PI = acos(-1);
const long long int SIZE =1000005;

int main()
{
    char s[1000005],a[1000005];
        int max=1;
    while(scanf("%s",s))
    {
        if(!strcmp(s,"E-N-D"))
        break;
        int len=strlen(s);
       //cout << l<< endl;
        int c=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]=='-')
            continue;
            else
            c++;
        }
        len=len-c;
        if(max<len){
            max=len;
            strcpy(a,s);
        }
    }
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
    if(a[i]>='A'&&a[i]<='Z')
       printf("%c",a[i]+32);
    else if(a[i]>='a'&&a[i]<='z'||a[i]=='-')
       printf("%c",a[i]);
    }
    printf("\n");
    //cout << max << endl;
    return 0;
}
