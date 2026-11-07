#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> c1 >> c2 >> s1 >> s2;
    if(c1 == s1)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    int t1 = c2[0]*10+c2[1];
    int t2 = s2[0]*10+s2[1];
    if(t1 == t2)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    if(c2[2] == 'A' || c2[2] == 'B' || c2[2] == 'C')
        t1 = 1;
    else
        t1 = 2;
    if(s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')
        t2 = 1;
    else
        t2 = 2;
    if(t1 == t2)
    {
        cout << 1;
        if(s2[2] == 'A'&&c2[2] == 'C')
            cout << 0;
        else if(s2[2] == 'C' && c2[2] == 'B')
            cout << 0;
        else
            cout << 1;
    }
    else
    {
        cout << 0 << 0;
    }
    return 0;
}
