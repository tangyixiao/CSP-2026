#include<bits/stdc++.h>
using namespace std;
long long n,a,len=0,cnt=0;
string s;
char c;

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a>>c;
        for(int j=1;j<=a;++j)s+=c;
    }
    for(int i=0;i<s.size()/2;++i)
        if(s[i]!=s[s.size()-i-1])++cnt;
    cout<<cnt<<endl;
    return 0;

}