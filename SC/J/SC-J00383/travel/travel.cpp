#include <bits/stdc++.h>
using namespace std;

bool travel3(char a,char b);
bool travel4(char a,char b);

int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;

    if(c1!=c2)
        cout<<"0000\n";
    else
    {
        cout<<"1";
        if(s1[0]!=s2[0] || s1[1]!=s2[1])
            cout<<"000\n";
        else
        {
            cout<<"1";
            if(!travel3(s1[2],s2[2]))
                cout<<"00\n";
            else
            {
                cout<<"1";
                if(!travel4(s1[2],s2[2]))
                    cout<<"0\n";
                else
                    cout<<"1\n";

            }

        }

    }





    return 0;
}

bool travel3(char a,char b)
{
    if((a=='A' || a=='B' || a=='C') && (b=='A' || b=='B' || b=='C'))
        return true;
    else if((a=='D' || a=='F') && (b=='D' || b=='F'))
        return true;
    return false;

}

bool travel4(char a,char b)
{
    if(a=='D' || (a=='B' || b=='B'))
       return true;
    else
        return false;

}

