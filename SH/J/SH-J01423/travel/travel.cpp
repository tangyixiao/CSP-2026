#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin) ;
    freopen("travel.out","w",stdout);
    int a1;
    int a2;
    cin>>a1>>a2;
    char a3;
    cin>>a3;
    int b1,b2;
    cin>>b1>>b2;
    char b3;
    cin>>b3;
    if(a1==b1)
    {
        if(a2==b2)
        {
            if(a3=='A'&&b3=='B')
            {
                cout<<"1111";
            }
            else if(a3=='A'&&b3=='C')
            {
                cout<<"1110";
            }
            else if(a3=='A'&&b3=='D')
            {
                cout<<"1100";
            }
            else if(a3=='A'&&b3=='F')
            {
                cout<<"1100";
            }
            else if(a3=='B'&&b3=='A')
            {
                cout<<"1111";
            }
            else if(a3=='B'&&b3=='C')
            {
                cout<<"1111";
            }
            else if(a3=='B'&&b3=='D')
            {
                cout<<"1100";
            }
            else if(a3=='B'&&b3=='F')
            {
                cout<<"1100";
            }
            else if(a3=='C'&&b3=='A')
            {
                cout<<"1110";
            }
            else if(a3=='C'&&b3=='B')
            {
                cout<<"1111";
            }
            else if(a3=='C'&&b3=='D')
            {
                cout<<"1100";
            }
            else if(a3=='C'&&b3=='F')
            {
                cout<<"1100";
            }
            else if(a3=='D'&&b3=='A')
            {
                cout<<"1100";
            }
            else if(a3=='D'&&b3=='B')
            {
                cout<<"1100";
            }
            else if(a3=='D'&&b3=='C')
            {
                cout<<"1100";
            }
            else if(a3=='D'&&b3=='F')
            {
                cout<<"1111";
            }
            else if(a3=='F'&&b3=='A')
            {
                cout<<"1100";
            }
            else if(a3=='F'&&b3=='B')
            {
                cout<<"1100";
            }
            else if(a3=='F'&&b3=='C')
            {
                cout<<"1100";
            }
            else if(a3=='F'&&b3=='D')
            {
                cout<<"1111";
            }
        }
        else
        {
            cout<<"1000";
            return 0;
        }

    }
    else
    {
        cout<<"0000";
        return 0;
    }
    return 0;
}
