#include <bits/stdc++.h>
using namespace std;
int c1, c2;
char s12, s22;
int s11, s21;
string ans;
bool check1(char a, char b)
{
    return (a >= 'A' && a <= 'C' && b >= 'A' && b <= 'C') || (a == 'D' && b == 'F') || (a == 'F' && b == 'D');
}
bool check2(char a, char b)
{
    if (a > b) swap (a, b);
    return b - a <= 1;
}
int main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> s11 >> s12;
    cin >> c2 >> s21 >> s22;
    if (c1 == c2)
    {
        ans += '1';
    }
    else ans += '0';
    if (c1 == c2 && s11 == s21)
    {
        ans += '1';
    }
    else
    {
        ans += '0';
    }
    if (c1 == c2 && s11 == s21 && check1(s12, s22))
    {
        ans += '1';
    }
    else ans += '0';
    if (c1 == c2 && s11 == s21 && check1(s12, s22) && check2(s12, s22))
    {
        ans += '1';
    }
    else ans += '0';
    cout << ans << endl;
    return 0;
}