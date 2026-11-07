#include<bits/stdc++.h>
using namespace std;
int n;
string c[1],s[1],c[2],s[2];
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    for(int i = 1;i<=n;i++)
    {
        cin>>n>>c[1]>>s[1]>>c[2]>>s[2];
        for(int i = "A";i<="Z";i++)
        {
            if("A"=="B"||"B"=="C"||"C"=="D"||"D"=="F")
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
            if(c[1]==s[1])
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
            if(c[2]==s[2])
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
    }
}
    return 0;
}
