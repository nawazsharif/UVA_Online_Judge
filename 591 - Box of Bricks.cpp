#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int arr[101];

int main()
{
    int n,i,j,sum,add,mid,t=1;
    while(scanf("%d",&n)==1)
    {
        int add=0,mid=0,sum=0;
        if(n==0)
            break;
        else
        {
            for(int i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
                add=add+arr[i];
            }
            //printf("add : %d",add);
            mid=add/n;
            //printf("mid : %d",mid);
            for(int j=0;j<n;j++)
            {
                if(arr[j]>mid)
                sum=sum+(arr[j]-mid);
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n\n",t,sum);
            t++;
        }
    }
    return 0;
}
