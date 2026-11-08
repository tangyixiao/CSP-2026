#include<bits/stdc++.h>
using namespace std;
namespace RST
{
    void solve()
    {
        string c1,s1,c2,s2;
        cin>>c1>>s1>>c2>>s2;
        if(s1[2]=='F')
        {
            s1[2]='E';
        }
        if(s2[2]=='F')
        {
            s2[2]='E';
        }
        bool t=0;
        cout<<(c1==c2);
        cout<<(t=((c1==c2)&&(s1.substr(0,2)==s2.substr(0,2))));
        cout<<(t=(t&&((s1[2]<='C')==(s2[2]<='C'))));
        cout<<(t&&(abs(s1[2]-s2[2])==1));
        return;
    }
}
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--)
    {
        RST::solve();
    }
    return 0;
} //g++ -o travel.exe travel.cpp -lm -O2 -static -std=c++14 -Wall -Wl,--stack=1000000000

//考试密码怎么是 "Trick||Treat!"
//Why?CCF还知道今天是万圣节啊
//rp++