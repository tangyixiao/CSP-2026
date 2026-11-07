#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    string a,b,n,m;
    cin >> a >> b >> n >> m;
    if(a==n)
    {
        cout << 1;
        string l,r;
        l+=b[0];
        l+=b[1];
        r=+m[0];
        r+=m[1];
        if(l==r)
        {
            cout << 1;
            if((b[2]<='C'&&m[2]<='C')||(b[2]>'C'&&m[2]>'C'))
            {
                cout << 1;
                if(abs(b[2]-m[2])==1)
                {
                    cout << 1;
                }
                else
                {
                    cout << '0';
                }
            }
            else
            {
                cout <<"00";
            }
        }
        else
        {
            cout << "000";
        }
    }
    else
    {
        cout << "0000";
    }
    return 0;
}
