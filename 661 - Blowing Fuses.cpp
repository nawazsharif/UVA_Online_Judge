#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <stack>
#include <vector>
#include <queue>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cs=1,n,m,p,e,aa[100],bb[100],flag[20],sum,max=0;
    while(scanf("%d %d %d",&n,&m,&p)==3)
    {
        sum=0,max=0;
        if(n==0 && m==0 && p==0)
            break;

        for (int i = 1; i <= n; i++)
            flag[i] = 0;

        for(int i=1;i<=n;i++)
        {
            scanf("%d",&aa[i]);
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&e);
            //cout <<"a" <<aa[e] << endl;
            if(flag[e]==0)
            {
                sum+=aa[e];
                flag[e]=1;
            }
            else
            {
                sum-=aa[e];
                flag[e]=0;
            }
            if(max < sum)
            {
                max=sum;
            }
        }
        //cout << max << " "<< p << endl;
        printf("Sequence %d\n",cs++);
        if(max > p)
            printf("Fuse was blown.\n\n");
        else
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n",max);

    }


    return 0;
}

