#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

bool check(string s1, string s2)
{
    if(s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C')
    {
        if(s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')
            return true;
    }
    else
    {
        if(s2[2] == 'E' || s2[2] == 'F')
            return true;
    }
    return false;
}
int main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string c1, s1, c2, s2;
    cin>>c1>>s1>>c2>>s2;
    if(s1[2] == 'D') s1[2] = 'E';
    if(s2[2] == 'D') s2[2] = 'E';
    if(c1 == c2)
    {
        cout<<1;
        if(s1[0] == s2[0] && s1[1] == s2[1])
            cout<<1;
        else cout<<0;

        if(s1[0] == s2[0] && s1[1] == s2[1] && check(s1, s2))
            cout<<1;
        else cout<<0;
        if(s1[0] == s2[0] && s1[1] == s2[1] && check(s1, s2))
        {
            if(abs(s1[2] - s2[2]) == 1)
                cout<<1;
            else cout<<0;
        }
        else
        {
            if(s1[2] == s2[2] && abs((s1[0] - '0') * 10 + (s1[1] - '0') - (s2[0] - '0') * 10 - (s2[1] - '0')) == 1)
                cout<<1;
            else cout<<0;
        }
    }
    else
        cout<<"0000"<<endl;

    return 0;
}
