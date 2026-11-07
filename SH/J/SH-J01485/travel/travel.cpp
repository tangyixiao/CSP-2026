#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","l",stdout);
    string c1,c2,s1,s2;
    cin >> c1>>s1>>c2>>s2;
    bool a1=false,a2=false,a3=false,a4=false;
    if(c1==c2) a1=true;
    if(s1[0]==s2[0]&&s1[1]==s2[1]) a2=true;

    if(a2==true)
    {
        if(s1[2]=='F'&&s2[2]=='F') a3=true;
        if(s1[2]=='D'&&s2[2]=='F') a3=true;
        if(s1[2]=='F'&&s2[2]=='D') a3=true;
        if(s1[2]=='D'&&s2[2]=='D') a3=true;
        if(s1[2]=='A'&&s2[2]=='A') a3=true;
        if(s1[2]=='A'&&s2[2]=='B') a3=true;
        if(s1[2]=='A'&&s2[2]=='C') a3=true;
        if(s1[2]=='B'&&s2[2]=='A') a3=true;
        if(s1[2]=='B'&&s2[2]=='B') a3=true;
        if(s1[2]=='B'&&s2[2]=='C') a3=true;
        if(s1[2]=='C'&&s2[2]=='C') a3=true;
        if(s1[2]=='B'&&s2[2]=='C') a3=true;
        if(s1[2]=='A'&&s2[2]=='C') a3=true;

    }

    if(a2==true&&a3==true){
        if(s1[2]=='A'&&s2[2]=='B') a4=true;
        if(s1[2]=='B'&&s2[2]=='C') a4=true;
        if(s1[2]=='C'&&s2[2]=='B') a4=true;
        if(s1[2]=='B'&&s2[2]=='A') a4=true;
        if(s1[2]=='F'&&s2[2]=='D') a4=true;
        if(s1[2]=='D'&&s2[2]=='F') a4=true;
    }
    if(a1==false)
    {

        a2=false;
        a3=false;
        a4=false;
    }


    cout<<a1<<a2<<a3<<a4;


    return 0;
}

