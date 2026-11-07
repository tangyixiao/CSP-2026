#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    string a;
    cin >> a;
    string b;
    cin >> b;
    string c;
    cin >> c;
    string d;
    cin >> d;


    if(a == c)
    {
        cout << 1;
        if(b[0] == d[0] & b[1] == d[1])
        {
            cout << 1;
            if((b[2] =='A'||b[2] =='B'||b[2] =='C') &  (d[2]=='A'||d[2]=='B'||d[2]=='C'))
            {
                cout << 1;
                if(b[2] == 'B' || d[2] == 'B')
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }
            else if((b[2] =='D'||b[2] =='F') &  (d[2]=='D'||d[2]=='F'))
            {
                cout << 1 << 1 << "\n";

            }
            else
            {
                cout << 0 << 0 << "\n";
            }

        }
        else
        {
            cout << 0 << 0 << 0 << "\n";
        }


    }
    else
    {
       cout << 0 << 0 << 0 << 0 << "\n";
    }
    return 0;
}
