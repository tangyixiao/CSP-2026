#include <bits/stdc++.h>
using namespace std;
int b[(int)'G'];

int main()
{

    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    b['A'] = b['B'] = b['C'] = 1;
    b['D'] = b['F'] = 0;
    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1 == c2) {
        cout << 1;
        if(s1[0] == s2[0] && s1[1] == s2[1]) {
            cout << 1;
            if(b[s1[2]] == b[s2[2]]) {
                cout << 1;
                if((abs(s1[2] - s2[2]) == 1) || ((s1[2] == 'D' && s2[2] == 'F')||(s1[2] == 'F' && s2[2] == 'D'))) {
                    cout << 1;

                }
                else cout << 0;
            }
            else cout << "00";
        }
        else cout << "000";
    }
    else cout << "0000";
}
