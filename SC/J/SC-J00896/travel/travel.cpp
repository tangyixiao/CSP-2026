#include <bits/stdc++.h>
using namespace std;

//main
//

int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string cx,sx,cy,sy;
    cin >> cx >> sx >> cy >> sy;
    if(cx == cy)
    {
        cout <<"1";
        if(sx[0] == sy[0] && sx[1] == sy[1])
        {
            cout <<"1";
            if((sx[2] <= 'C' && sy[2] <= 'C') || (sx[2] >= 'D' && sy[2] >= 'D'))
            {
                cout <<"1";
                if(sx[2] > sy[2])   swap(sx,sy);
                if(sx[2] == 'A')    cout <<(sy[2] == 'B' ? "1":"0");
                else if(sx[2] == 'B')   cout << (sy[2] == 'C' ? "1":"0");
                else if(sx[2] == 'D')   cout << (sy[2] == 'F' ? "1":"0");
                else    cout << "0";
            }
            else    cout <<"00";
        }
        else    cout <<"000";
    }
    else    cout <<"0000";
    return 0;
}
/**/