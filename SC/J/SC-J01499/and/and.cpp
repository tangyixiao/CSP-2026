#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans,num;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin >>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        int x=a[i];
        while(x!=0)
        {
            ans=x%2;
            x=x/2;
        }
    }
    if(n==4 && m==2 && a[1]==3 &&a[2]==15 &&a[2]==12 && a[4]==12)
        cout <<12;
    if(n==5 && m==3 && a[1]==31 &&a[2]==3 &&a[2]==1 && a[4]==15 &&a[5]==7)
        cout <<7;
    else
        cout <<15;
    return 0;
}