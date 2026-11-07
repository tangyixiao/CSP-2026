#include<bits/stdc++.h>
using namespace std;
bool check(char a,char b)
{
    if(a == 'A' && b == 'D' || a == 'A' && b == 'F' || a == 'B' && b == 'D' || a == 'B' && b == 'F' || a == 'C' && b == 'D' || a == 'C' && b == 'F')
    {
        return false;
    }
    if(b == 'A' && a == 'D' || b == 'A' && a == 'F' || b == 'B' && a == 'D' || b == 'B' && a == 'F' || b == 'C' && a == 'D' || b == 'C' && a == 'F')
    {
        return false;
    }
    return true;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1 == c2)
    {
        cout << "1";
        string p1,p2;
        p1 = s1[0] + s1[1];
        p2 = s2[0] + s2[1];
        if(p1 == p2)
        {
            cout << "1";
            char d1 = s1[2];
            char d2 = s2[2];
            if(check(d1,d2) == true)
            {
                cout << "1";
                if(d1 + 1 == d2 || d1 - 1 == d2)
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
