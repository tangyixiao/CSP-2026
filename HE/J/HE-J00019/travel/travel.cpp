#include <iostream>
#include <string>
using namespace std;
int a, b, r,X, c, d;
string x, y, xq, yq, xh, yh;
int main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> a >> x >> b >> y;
    xq = x.substr(0, 2);
    yq = y.substr(0, 2);
    xh = x.substr(2);
    yh = y.substr(2);
    if (xh == "A" || xh == "B" || xh == "C")
        r = 1;
    else
        r = 2;
    if (yh == "A" || yh == "B" || yh == "C")
        X = 1;
    else
        X = 2;
    if (xh == "A")
        c = 1;
    else if (xh == "B")
        c = 2;
    else if (xh == "C")
        c = 3;
    else if (xh == "D")
        c = 5;
    else if (xh == "F")
        c = 6;
    if (yh == "A")
        d = 1;
    else if (yh == "B")
        d = 2;
    else if (yh == "C")
        d = 3;
    else if (yh == "D")
        d = 5;
    else if (yh == "F")
        d = 6;
    if(a == b)
        cout << 1;
    else
        cout << 0 << 0 << 0 << 0;
        return 0;
    if (xq == yq)
        cout << 1;
    else
        cout << 0 << 0 << 0;
        return 0;
    if (xq == yq && r == X)
        cout << 1;
    else
        cout << 0;
    if (xq == yq && (r == 2 && X == 2))
    {
        cout << 1;
    }
    else if (xq == yq && (c - d == 1 || d - c == 1))
    {
            cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
