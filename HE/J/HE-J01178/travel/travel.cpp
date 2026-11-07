#include <bits/stdc++.h>

using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int a,b,c,d;
    string x,y;
    cin >> a >> b >> x >> c >> d >> y;
    if(a==c)
    {
        if(b==d)
        {
            if((x=="F" && y=="D") || (y=="F" && x=="D") || (x=="A"&&y=="B") || (y=="A"&&x=="B") || (x=="C"&&y=="B") || (x=="B"&&y=="C") || (x=="C"&&y=="A") || (x=="A"&&y=="C"))
            {
                if((x=="F" && y=="D") || (y=="F" && x=="D") || (x=="A"&&y=="B") || (x=="B" && y=="C") || (y=="A"&&x=="B") || (x=="C"&&y=="B"))
                    cout << 1111;
                else
                    cout << 1110;
            }
            else
                cout << 1100;
        }
        else
            cout << 1000;
    }
    else
        cout << "0000";
    return 0;
}
