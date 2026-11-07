#include<iostream>
#include<string>
using namespace std;
int main()
{
   freopen("traval.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,c2,c3,c4;
    bool b1=0,b2=0,b3=0,b4=0;
    if(c1==c3)
    {
        b1=1;
    }
    else{
        cout << b1 << b2 << b3 << b4;
        return 0;
    }
    if(c2[0]==c4[0]&&c2[1]==c4[1])
    {
        b2=1;
    }else{
    cout << b1 << b2 << b3 << b4;
    return 0;
    }
    if((c2[3]=='A'&&c4[3]=='B')||(c2[3]=='A'&&c4[3]=='C')||(c2[3]=='C'&&c4[3]=='B')||(c2[3]=='C'&&c4[3]=='A')||(c2[3]=='B'&&c4[3]=='A')||(c2[3]=='B'&&c4[3]=='C')||(c2[3]=='D'&&c4[3]=='F')||(c2[3]=='F'&&c4[3]=='D'))
    {
        b3=1;
    }
    else{
        cout << b1 << b2 << b3 << b4;
        return 0;
    }
    if((c2[3]=='A'&&c4[3]=='B')||(c2[3]=='B'&&c4[3]=='C')||(c2[3]=='B'&&c4[3]=='A')||(c2[3]=='C'&&c4[3]=='B')||(c2[3]=='D'&&c4[3]=='F')||(c2[3]=='F'&&c4[3]=='D'))
    {

        b4=1;
    }
    cout << b1 << b2 << b3 << b4;
    return 0;
}
