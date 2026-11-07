#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int a;
    cin>>a;
    char b;
    for(int i=1;i<=a;i++)
    {
        cin>>i;
        cin>>b;
    }
    if(a==1)
    {
        cout<<0;
    }
    else if(b=='a')
    {
        cout<<0;
    }
    else
    {
       cout<<2;
    }
    return 0;
}
