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
    int t;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        stack<char>st;
        getline(cin,s);

        int f=0,i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='[')
            st.push(s[i]);
            else if(s[i]==')' && !st.empty() && st.top()=='(')
            st.pop();
            else if(s[i]==']' && !st.empty() && st.top()=='[')
            st.pop();
            else
            f=1;
        }
        if(st.empty()&&f==0)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}
