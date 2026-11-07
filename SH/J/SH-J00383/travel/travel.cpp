#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

int main()
{
    freopen ("travel.in", "r", stdin);
    freopen ("travel.out", "w", stdout);

    cin >> c1 >> s1 >> c2 >> s2;
    if (c1 == c2)  cout << 1;  //在不在同一个车厢
    else
    {
        cout << 0 << 0 << 0 << 0;
        return 0;
    }
    if (s1[0] == s2[0] && s1[1] == s2[1])  cout << 1;  //在不在同一排
    else
    {
        cout << 0 << 0 << 0;
        return 0;
    }
    //在不在过道的同一侧
    if ((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C'))  cout << 1;
    else if ((s1[2] == 'D' || s1[2] == 'E') && (s2[2] == 'D' || s2[2] == 'E'))
    {
        cout << 1 << 1;
        return 0;
    }
    else
    {
        cout << 0 << 0;
        return 0;
    }
    if (s1[2] == 'A')
    {
        if (s2[2] == 'B')  cout << 1;
        else  cout << 0;
    }
    else if (s1[2] == 'B')
    {
        if (s2[2] == 'A' || s2[2] == 'C')  cout << 1;
        else  cout << 0;
    }
    else if (s1[2] == 'C')
    {
        if (s2[2] == 'B')  cout << 1;
        else  cout << 0;
    }

    return 0;
}
