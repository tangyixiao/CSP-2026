#include <bits/stdc++.h>
using namespace std;

string c1,c2,s1,s2;
bool flag1,flag2,flag3,flag4;

int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    cin>>c1>>s1>>c2>>s2;

    if(c1==c2)
    {
        cout<<"1";
    }
    else
    {
    	cout<<"0000";
    	return 0;
	}

    if(s1[1]==s2[1]&&s1[0]==s2[0])
    {
    	flag2=1;
	}
    if(flag2==0)
    {
        cout<<"000";
        return 0;
    }
    else
    {
        cout<<"1";
    }

    char a=s1[2],b=s2[2];
    if(a=='B'||a=='C'||a=='A')
    {
        if(b=='B'||b=='C'||b=='A')
        {
            flag3=1;
        }
    }
    else
    {
        if(b=='E'||b=='F')
        {
            flag3=1;
        }
    }
    if(flag3==1)
    {
        cout<<"1";
    }
    else
    {
        cout<<"00";
        return 0;
    }

    if((a=='A'&&b=='B')||(a=='B'&&b=='A')||(a=='B'&&b=='C')||(a=='C'&&b=='B')||(a=='E'&&b=='F')||(a=='F'&&b=='E'))
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }

    return 0;
}
