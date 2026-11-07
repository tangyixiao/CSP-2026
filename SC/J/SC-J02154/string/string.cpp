#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        char m;
        cin>>x>>m;
        for(int i=1;i<=x;i++)
        {
            s+=m;
        }
    }
    //cout<<s<<"\n";
    //cout<<s1;
    int cnt=0;
    for(int i=0,j=s.size();i<s.size();i++,j--)
    {
        if(s[i]!=s[j])
        {
            s[j]=s[i];
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}//haha我nB