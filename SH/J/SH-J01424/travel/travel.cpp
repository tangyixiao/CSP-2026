#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int n,m;
    string x,y;
    cin >> n >> x;
    cin >> m >> y;
    if(n!=m)
    {
        cout << "0000";
        return 0;
    }
    if(x[0,1]!=y[0,1] && n==m)
    {
        cout << "1000";
        return 0;
    }
    if(x[0,1]==y[0,1] && n==m)
    {
        cout << "11";
        if(x[2]<='C' && y[2]<='C' || (x[2]>'C' && x[2]<='F') && (y[2]>'C' && y[2]<='F'))
        {
            cout << "1";
            if(x[2]-y[2]==1 || x[2]-y[2]==-1)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        else
        {
            cout << "00";
        }
    }
    return 0;
}
