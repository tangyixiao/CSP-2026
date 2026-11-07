#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    freopen("travel.in" , "r" , stdin);
    freopen("travel.out" , "w" , stdout);
    string c1 , s1 , c2 , s2;
    cin >> c1 >> s1 >> c2 >> s2;
    bool flag1 = false , flag2 = false , flag3 = false , flag4 = false;
    if (c1 == c2) flag1 = true;
    if (flag1 && s1.substr(0 , 2) == s2.substr(0 , 2)) flag2 = true;
    if (s1 > s2) swap(s1 , s2);
    if (flag2 && (s2[2] <= 'C' || s1[2] == 'D')) flag3 = true;
    if (flag3 && (s2[2] == s1[2] + 1 || (s1[2] == 'D' && s2[2] == 'F'))) flag4 = true;
    cout << flag1 << flag2 << flag3 << flag4 << '\n';
    return 0;
}
