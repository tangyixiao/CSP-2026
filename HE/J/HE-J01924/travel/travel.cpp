#include<bits/stdc++.h>
using namespace std;

inline bool judge(char c)
{
    return c == 'A' ||  c == 'B' || c == 'C';
}

int main()
{
    iostream::sync_with_stdio(false);
    cout.tie(nullptr);

    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    string c1,s1,c2,s2;
    cin >> c1 >> s1 >> c2 >> s2;


    bool box = c1 == c2;
    bool w = (s1.substr(0,2) == s2.substr(0,2)) && box;
    bool l = (judge(s1[2]) == judge(s2[2])) && w;
    bool bs = (max(s1[2],s2[2]) - min(s1[2],s2[2]) == 1) && l;

    cout << box << w << l << bs;

    return 0;
}
