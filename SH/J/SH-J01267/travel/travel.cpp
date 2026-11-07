#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,c2,s1,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    int n1,n2;
    n1 = (c1[0] - '0') * 10 + (c1[1] - '0');
    n2 = (c2[0] - '0') * 10 + (c2[1] - '0');
    if (n1 == n2) cout << 1;
    else
    {
        cout << "0000";
        return 0;
    }
    n1 = (s1[0] - '0') * 10 + (s1[1] - '0');
    n2 = (s2[0] - '0') * 10 + (s2[1] - '0');
    if (n1 == n2) cout << 1;
    else
    {
        cout << "000";
        return 0;
    }
    if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') n1 = 0;
    else n1 = 1;
    if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') n2 = 0;
    else n2 = 1;
    if (n1 == n2) cout << 1;
    else
    {
        cout << "00";
        return 0;
    }
    if (s1[2] == s2[2] + 1 || s2[2] == s1[2] + 1) cout << 1;
    else cout << 0;
    return 0;
}
