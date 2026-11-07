#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[500000];
int cd[300000];
void c(int l);

int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        c(i);

    }
    for(int i=0;i<m;i++)
        cout<<cd[i]<<" \n";

    return 0;
}

void c(int l)
{
    int x[300000];
    int length=0;
    for(int i=0;i<n-l+1;i++)
    {

        for(int j=0;j<length;j++)
        {
            if(x[j]==a[i+l-1])
                length=j;
        }
        x[length]=a[i+l-1];
        length++;

    }
    for(int i=0;i<length;i++)
    {
        cd[x[i]]++;
    }

}
