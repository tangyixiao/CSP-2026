#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
int n,w1=0,w2=0;
string x,y;
cin>>n;

for(int i=1;i<=n;i++)
{
cin>>x[i]>>y[i];
}
if(n<=1)
{
    cout<<"0";
    return 0;
}

for(int i=1;i<=n;i++)
{

if(i>=2)
    {
        if(y[i]==y[i-1])
        {
            w1++;
        }
    }
}

if(w1==n-1)
{
    cout<<"0";
    return 0;
}
for(int i=1;i<=n;i++)
{
    if(i>=2)
    {
        if(x[i]==x[i-1])
        {
            w2++;
        }
    }
}
if(w2==n-1)
{
    cout<<"0";
    return 0;
}

    return 0;
}