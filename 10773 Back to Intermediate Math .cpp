#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,t=1;

double u,v,dist,t1,t2,td;

cin>>tc;
while(tc--)
{
    scanf("%lf%lf%lf",&dist,&v,&u);
    if(v==0 || u == 0 || v >=u)
    {
        printf("Case %d: can't determine\n",t++);
        continue;
    }
    t1 = (dist)/(u);
    t2 = (dist)/(sqrt((u*u)-(v*v)));

    td = abs(t2-t1);

    printf("Case %d: %.3lf\n",t++,td);
}

    return 0;
}
