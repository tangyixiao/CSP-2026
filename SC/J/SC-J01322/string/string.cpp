#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,p=0,l=0,r=0;
    long long cnt=0;
    cin>>n;
    int a[n+10];
    char b[n+10];
    double c[100000],h[10000];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        cnt=cnt+a[i];}
    for(int o=1;o<=n;o++)
    {
        for(int j=1;j<=a[o];j++)
        {
            l++;
            if(l>1e5)
            {
                r++;
                h[r]=b[o];
            }
            else
            {
            c[l]=b[o];
            }
        }
    }
    int k=0;
    long long m=cnt+1;
    if(l<100000){
        while(true)
        {
            k++;
            m--;
            if(k>=m)
            {
                break;
            }
            if(c[k]!=c[m])
            {

                p++;
            }
        }
    }
    else
    {
        int g=r+1;
        long long m=100000;
       for(int i=1;i<=r;i++)
       {
           g--;
           if(c[i]!=h[g])
           {
               p++;
           }
       }
       while(true)
       {
           g++;m--;
           if(c[g]!=c[m])
           {
               p++;
           }
       }
    }
    cout<<p;
    return 0;
}
