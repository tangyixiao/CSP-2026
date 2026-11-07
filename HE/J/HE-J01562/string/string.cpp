#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    string s;
    cin>>s;
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        char c;cin>>c;
    }
    int cnt=0;
    for(int i=1;i<s.size();i++)
    {
        for(int j=1;j<s.size();j++)
        {
            if(i!=j)
            {
                cnt++;
            }
        }
    }
    cout <<cnt;
    return 0;
}
