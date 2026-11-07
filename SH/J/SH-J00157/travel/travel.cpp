#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
string row1, row2;
char seat1, seat2;
bool q1()
{
    return c1 == c2;
}
bool q2()
{
    return row1 == row2;
}
bool q3()
{
    if (seat1 == 'A' || seat1 == 'B' || seat1 == 'C')
    {
        return seat2 == 'A' || seat2 == 'B' || seat2 == 'C';
    }
    else
    {
        return seat2 == 'D' || seat2 == 'F';
    }
}
bool q4()
{
    switch (seat1)
    {
        case 'A':
            return seat2 == 'B';
            break;
        case 'B':
            return seat2 == 'A' || seat2 == 'C';
            break;
        case 'C':
            return seat2 == 'B';
            break;
        case 'D':
            return seat2 == 'F';
            break;
        case 'F':
            return seat2 == 'D';
            break;
        default:
            return 0;
            break;
    }
}
int main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    // cout << c1 << ' ' << s1 << ' ' << c2 << ' ' << s2 << endl;
    row1 = s1.substr(0, 2);
    row2 = s2.substr(0, 2);
    seat1 = s1[2];
    seat2 = s2[2];
    bool ans1 = q1(), ans2 = ans1 && q2(), ans3 = ans1 && ans2 && q3(), ans4 = ans1 && ans2 && ans3 && q4();
    printf("%d%d%d%d\n", ans1, ans2, ans3, ans4);
    return 0;
}