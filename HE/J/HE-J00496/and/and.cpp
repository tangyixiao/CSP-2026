
#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int n[20010];
int m[20010][33];
int r(int n,int l)
{
    int k=1,w=0;
    while(n!=0)
    {
        m[l][k]=n%2;
        if(m[l][k]==1)
        {
            w++;
        }
        n=n/2;
        k++;
    }
    return w;
}
int main()
{
    int a,b;
    cin >> a >> b;
    for(int i=1;i<=a;i++)
    {
        cin >> n[i];

    }
    sort(n+1,n+a+1,cmp);
    for(int i=1;i<=a;i++)
    {
        r(n[i],i);

    }









    return 0;

}
