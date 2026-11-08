#include <bits/stdc++.h>
#define double long double
#define int long long
using namespace std;
const double eps=1e-6;
const int inf=0x3f3f3f3f3f3f3f3f;
string s,t;
int x,y,s1,t1;
void solve()
{
    cin>>x>>s>>y>>t;
    string temp=s;
    temp.pop_back();
    s1=stoll(temp);
    temp=t;
    temp.pop_back();
    t1=stoll(temp);
    if (x!=y)
    {
        cout<<"0000\n";
        return;
    }
    cout<<'1';
    if (s1!=t1)
    {
        cout<<"000\n";
        return;
    }
    cout<<'1';
    char c=s.back(),d=t.back();
    if (c>d)
    {
        swap(c,d);
    }
    if (c<='C'&&d<='C'||c>='D'&&d>='D')
    {
        cout<<'1';
        if (c==d-1)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"0\n";
        }
    }
    else
    {
        cout<<"00\n";
    }
    return;
}
signed main()
{
    // freopen("travel/travel5.in","r",stdin);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int TestCase=1;
    // cin>>TestCase;
    for (int CaseId=1;CaseId<=TestCase;CaseId++)
    {
        solve();
    }
    return 0;
}

/*
g++ travel.cpp -o travell -std=c++14 -O2
./travell
*/