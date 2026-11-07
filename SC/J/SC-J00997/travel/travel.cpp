#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a,b; string s1,s2;
    cin>>a>>s1>>b>>s2;
    if(a==b)
    {
        cout<<1;
        if((s2[0]-'0')*10+(s2[1]-'0')==(s1[0]-'0')*10+(s1[1]-'0'))
        {
            cout<<1;
            if((s1[2]=='A' or s1[2]=='B' or s1[2]=='C') and (s2[2]=='A' or s2[2]=='B' or s2[2]=='C'))
            {
                cout<<1;
                if((s1[2]=='A' && s2[2]=='B') or (s1[2]=='B' && (s2[2]=='C' or s2[2]=='A')) or (s1[2]=='C' && s2[2]=='B') or (s1[2]=='D' && s2[2]=='F'))
                    cout<<1;
                else cout<<0;
            }
            else cout<<"00";
        }
        else cout<<"000";
    }
    else cout<<"0000";
    cout<<'\n';
    return 0;
}
