#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int a ,b,d;
    cin>>a>>b>>d;
    for(int i = 1; i <= n; i++)
    {
        if(a <= 16 && b <= 16||a >= 17 && b >= 17)
            {
                d + "1" = d;
                cout<<d ;
                return 0;
            }
        if(a >= 17 && b <= 16 || a <=16 &&b >= 17)
        {
            d + "0" = d;
            cout<<d;
        }

        if(a == b)
        {
            d + "1" = d;
            cout<<d;
            return 0;
        }
            if(a != b)
            {
                d + "0" = d;
                cout<<d;
            }

        if(a <= "C" && b <= "C"|| a >= "D" && b >= "D")
        {
            d + "1" = d;
            cout<<;d
            return 0;
        }
            if(a <= "C" && b >= "D" || a >= "D" && b <= "C")
            {
                d + "0" = d;
                cout<<d;
            }

        if(a +1== b || a - 1 == b)
        {
            d + "1" = d;
            cout<<d;
            return 0;
        }
        if(a + 1 != b|| a - 1 != b )
        {
            d + "0" = d
            cout<<d;
        }
    }
    cout << d;
    return 0;
}
