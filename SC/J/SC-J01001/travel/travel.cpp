#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1!=c2)
    {
        cout<<"0000\n";
        return 0;
    }
    string s,t;
    for(int i=0;i<(int)(s1.size()-1);i++) s+=s1[i];
    for(int i=0;i<(int)(s2.size()-1);i++) t+=s2[i];
    if(s!=t)
    {
        cout<<"1000\n";
        return 0;
    }
    char a=s1[s1.size()-1],b=s2[s2.size()-1];
    int x=a-'A',y=b-'A';
    if(!((x<=2&&y<=2)||(x>2&&y>2)))
    {
        cout<<"1100\n";
        return 0;
    }
    if(abs(a-b)>1)
    {
        cout<<"1110\n";
        return 0;
    }
    cout<<"1111\n";
    return 0;
}