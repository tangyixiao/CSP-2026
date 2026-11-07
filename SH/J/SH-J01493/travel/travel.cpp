#include <iostream>
#include <string>
using namespace std;
freopen("travel.in", "r");
freopen("travel.out", "w");
int main()
{
    int a, b;
    string c, d;
    cin >> a >> c >> b >> d;
    if (a == b)
    {
        cout << "1 "; 
        int x1 = stoi(c.substr(0, 2));
        int x2 = stoi(d.substr(0, 2));
        char s1 = c[2];
        char s2 = d[2];
        if (x1 == x2)
        {
            cout << "1 ";
            if ((s1 == 'A' && (s2 == 'B' || s2 == 'C')) || (s1 == 'B' && (s2 == 'A' || s2 == 'C')) || (s1 == 'C' && (s2 == 'A' || s2 == 'B')) || (s1 == 'D' && s2 == 'F') || (s1 == 'F' && s2 == 'D'))
            {
                cout << "1 ";
                if ((s1 == 'A' && s2 == 'B') || (s1 == 'B' && (s2 == 'A' || s2 == 'C')) || (s1 == 'C' && s2 == 'B') || (s1 == 'D' && s2 == 'F') || (s1 == 'F' && s2 == 'D')) cout << "1" << endl;
                else cout << "0" << endl;
            }
            else 
            {
                cout << "0 0" << endl;
            }
        }
        else
        {
            cout << "0 0 0" << endl;
        }
    }
    else
    {
        cout << "0 0 0 0" << endl;
    }
    return 0;
}