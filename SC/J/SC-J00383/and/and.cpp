#include <bits/stdc++.h>
using namespace std;

int a[200000];
int x;
void f(int l,int c[],int m)
{
    if(l==m)
    {
        int r=a[c[0]];
        for(int i=1;i<m;i++)
            r=r|a[c[i]];
        if(r>x) x=r;
        return;

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(c[j]==i)
                continue;
        }

        c[l]=a[i];
        f(l+1,c[],m);

    }


}

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);

    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s[200000];
    for(int i=0;i<200000;i++)
        s[i]=0;
    f(0,s[],m);
    cout<<x<<"\n";



    return 0;
}


