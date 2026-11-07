#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char a,b,c,d,e,f;
    int c1,c2;
    cin>>c1>>a>>b>>c>>c2>>d>>e>>f;
    if(c1==c2)
    {
        cout<<1;
    }
    else
    {
        cout<<"0000";
        return 0;
    }
    if(a==d&&b==e)
    {
        cout<<1;
    }
    else
    {
        cout<<"000";
        return 0;
    }
    if(c=='F'||c=='D')
    {
        if(f=='F'||f=='D')
        {
            cout<<1;
            if((c=='F'&&f=='D')||(f=='F'&&c=='D')){
            	cout<<1;
			}
			else{
				cout<<0;
			}
        }
        else
        {
            cout<<"00";
        }
    }
    if(c=='A'||c=='B'||c=='C')
    {
        if(f=='A'||f=='B'||f=='C')
        {
            cout<<1;
            if((c=='A'&&f=='B')||(f=='A'&&c=='B'))
            {
                cout<<1;
            }
            else if((c=='B'&&(f=='A'||f=='C'))||(f=='B'&&(c=='A'||c=='C')))
            {
                cout<<1;
            }
            else if((c=='C'&&f=='B')||(f=='C'&&c=='B'))
            {
				cout<<1;
            }
            else
            {
                cout<<0;
            }
        }
        else
        {
            cout<<"00";
        }
    }
    return 0;
}