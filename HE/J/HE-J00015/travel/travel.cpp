#include <bits/stdc++.h>
using namespace std;

int main () {
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string s,t,ss,tt;
    cin>>s>>t>>ss>>tt;
    if(s==ss)
    {
        cout<<"1";
        int flag = 0;
        for(int i = 0;i < 2;i++)
        {
            if(t[i]!=tt[i])
            {
                flag = 1;
            }
        }
        if(flag==0)
        {
            cout<<"1";
            if(t[2]<='C'&&tt[2]<='C'||t[2]>='D'&&tt[2]>='D')
            {
                cout<<"1";
                if(t[2]+1==tt[2]||t[2]-1==tt[2])
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
