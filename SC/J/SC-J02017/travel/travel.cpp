#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string c1,s1,c2,s2;
bool chk1()
{
    if(c1 == c2) return true;
    return false;
}
bool chk2()
{
    if(s1[0] == s2[0] && s1[1] == s2[1]) return true;
    return false;
}
bool chk3()
{
    char u1 = s1[2] - 'C';
    char u2 = s2[2] - 'C';
    if(u1 <= 0 && u2 <= 0) return true;
    if(u1 > 0 && u2 > 0) return true;
    return false;
}
bool chk4()
{
    char u1 = s1[2];
    char u2 = s2[2];
    if(u1 > u2) swap(u1,u2);
    if(u1 == 'A' && u2 == 'B') return true;
    if(u1 == 'B' && u2 == 'C') return true;
    if(u1 == 'D' && u2 == 'F') return true;
    return false;
}
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    if(chk1())
    {
        if(chk2())
        {
            if(chk3())
            {
                if(chk4()) cout << "1111";
                else cout << "1110";
            }
            else cout << "1100";
        }
        else cout << "1000";
    }
    else cout << "0000";
    return 0;
}