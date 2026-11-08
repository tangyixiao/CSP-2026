#include<iostream>
using namespace std;

string c1,s1,c2,s2;
bool f1=0,f2=0,f3=0,f4=0;
int main()
{
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2)
    {
        f1=1;
    }
    if((s1[0]==s2[0]) && (s1[1]==s2[1]) && f1==1)
    {
        f2=1;
    }
    int x=s1[2]-'A',y=s2[2]-'A';
    if(((x>=3 && y>=3) || (x<3 && y<3)) && f1==1 && f2==1)
    {
        f3=1;
    }
    if((x-y==1 || y-x==1) && f1==1 && f2==1 && f3==1)
    {
        f4=1;
    }
    cout<<f1<<f2<<f3<<f4;
    return 0;
}
