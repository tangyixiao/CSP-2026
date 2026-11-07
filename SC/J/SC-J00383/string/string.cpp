#include <bits/stdc++.h>
using namespace std;

int a[200000],c[200000];
int r=-1;
int l;
int cnt;
char abc(int n);

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"0\n";
        return 0;

    }
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>c[i];
        r=r+a[i];

    }


    while(l<r)
    {
        if(abc(l)!=abc(r))
            cnt++;
        l++;
        r--;

    }

    cout<<cnt<<"\n";

    return 0;
}

char abc(int n)
{
    int x=0;
    while(n>=0)
    {
        n=n-a[x];
        x++;
    }
    return c[x-1];

}
