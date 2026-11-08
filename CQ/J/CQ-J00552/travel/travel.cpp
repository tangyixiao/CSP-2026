#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    long long a,c;
    string b,d;
    cin>>a>>b>>c>>d;
    if(a!=c)
    {
        cout<<"0000";
        return 0;
    }
    if(b[0]!=d[0]||b[1]!=d[1])
    {
        cout<<"1000";
        return 0;
    }
    if((b[2]-'A'<=2)!=(d[2]-'A'<=2))
    {
        cout<<"1100";
        return 0;
    }
    if(abs(b[2]-d[2])!=1||(b[2]=='D'&&d[2]=='C')||(b[2]=='C'&&d[2]=='D'))
    {
        cout<<"1110"; 
        return 0;
    }
    cout<<"1111";
    return 0;
}
