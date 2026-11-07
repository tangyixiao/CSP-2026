#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,g;
string s[10];
string read()
{
    string ss="";
    char c;
    c=getchar();
    while(c==' '||c=='\n')
    {
        c=getchar();
    }
    while(('0'<=c&&c<='9')||('A'<=c&&c<='Z'))
    {
        ss+=c;
        c=getchar();
    }
    return ss;
}
bool qwe(char q)
{
    if(q<='C') return 1;
    return 0;
}
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    for(int i=1;i<=4;i++)
    {
        s[i]=read();
    }
    if(s[1]==s[3])
    {
        cout<<'1';
        if(s[2][0]==s[4][0]&&s[2][1]==s[4][1])
        {
            cout<<'1';
            if(qwe(s[2][2])==qwe(s[4][2]))
            {
                cout<<'1';
                if(abs(s[2][2]-s[4][2])==1||s[2][2]=='D'||s[4][2]=='D')
                {
                    cout<<'1';
                }
                else
                {
                    cout<<'0';
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