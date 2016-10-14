#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <stack>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,c,a,sum=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        priority_queue <int>q;

      sum=0;
        int sum=0,i,c=0;
        for (i=0;i<n;i++)
        {
            scanf("%d",&a);
            q.push(-a);
        }
        for(int i=0;i<n-1;i++)
        {
            int d=-q.top();
            q.pop();
            int b=-q.top();
            q.pop();
            c=d+b;
            sum+=c;
            q.push(-c);
        }
        printf("%d\n",sum);
    }

    return 0;
}
