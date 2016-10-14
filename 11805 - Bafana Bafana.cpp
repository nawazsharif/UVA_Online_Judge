#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int t,i,s,p,k,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
            scanf("%d%d%d",&n,&k,&p);
            s=k+p;
            while(s>n)
            {
                s=s-n;
            }
            printf("Case %d: %d\n",i,s);


    }


    return 0;
}
