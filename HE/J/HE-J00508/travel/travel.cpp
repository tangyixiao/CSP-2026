#include <bits/stdc++.h>
using namespace std;

string a,b,c,d;
bool bx[5];

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin >> a >> b >> c >> d;
    if(a == c)
    {
        bx[1] = true;
        if(b[0] == d[0] && b[1] == d[1])
        {
            bx[2] = true;
            char cc1 = b[2];
            char cc2 = d[2];
            if((cc1 <= 'C' && cc2 <= 'C') || (cc1 >= 'D' && cc2 >= 'D'))
            {
                bx[3] = true;
                if(cc1 == 'D' && cc2 == 'F')
                {
                    bx[4] = true;
                }
                if(cc1 == 'F' && cc2 == 'D')
                {
                    bx[4] = true;
                }
                if(cc1 == 'A' && cc2 == 'B')
                {
                    bx[4] = true;
                }
                if(cc2 == 'A' && cc1 == 'B')
                {
                    bx[4] = true;
                }
                if(cc1 == 'B' && cc2 == 'C')
                {
                    bx[4] = true;
                }
                if(cc2 == 'C' && cc1 == 'B')
                {
                    bx[4] = true;
                }
            }
        }
    }
    for(int i = 1;i <= 4;i++)
    {
        cout << bx[i];
    }
}
