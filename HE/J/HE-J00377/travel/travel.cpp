#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string  c1,c2,s1,s2;
    cin >>c1 >> c2 >> s1 >> s2;
    if(c1[0]==1||c1[1]>6&&s1[0]==1||s1[1]>6&&c1[1]!=s1[1])
    {
        cout << "0000";
        return 0;
    }
    else{
        cout << "1";
    }
    if(c2[1]==s2[1])
    {
        cout << "1";
    }
    else{
        cout << "000";
        return 0;
    }
    if(c2[2]!='D'&&c2[2]!='F'&&s2[2])!='D'&&s2[2]!='F')
    {
        cout << "1";
    }
    else{
        cout << "00";
        return 0;
    }
    if(char(c2[2]+1)==s2[2])
    {
        cout << "1";
    }
    else{
        cout << "0";
    }
    return 0;
}
