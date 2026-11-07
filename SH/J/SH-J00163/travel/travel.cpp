#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool ju(string a,string b)
{
    if(a[2]=='A'||a[2]=='B'||a[2]=='C')
    {
        if(b[2]=='A'||b[2]=='B'||b[2]=='C')
        {
            return 1;
        }
    }
    if(a[2]=='D'||a[2]=='F')
    {
        if(b[2]=='D'||b[2]=='F')
        {
            return 1;
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2)
    {
        cout<<"1";
        if(s1[0]==s2[0]&&s1[1]==s2[1])
        {
            cout<<"1";
            if(ju(s1,s2))
            {
                cout<<"1";
                if(abs(s1[2]-s2[2])==1)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
            }
            else
            {
                cout<<"00";
            }
        }
        else
        {
            cout<<"000";
        }
    }
    else
    {
        cout<<"0000";
    }
    return 0;
}
