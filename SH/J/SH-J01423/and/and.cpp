#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","r",stdin) ;
    freopen("and.out","w",stdout);
    int m;
    int n;
    cin>>n>>m;
    for(int i=11; i<=20; i++)
    {
        if(n==pow(2,i))
        {
            cout<<n-m;
            return 0;
        }
    }
    int ans=0;
    int a[n];
    int c=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        for(int j=0;j<=20;j++){
            if(a[i]==pow(2,j)-1)c++;
        }
    }

    if(m==1)
    {
        for(int i=0; i<n; i++)
        {
            ans=max(ans,a[i]);
        }
    }
    else if(m==n)
    {
        ans=a[0];
        for(int i=0; i<n; i++)
        {
            ans=ans&a[i];
        }
    }
    else if(m==2)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int ansaa=a[i]&a[j];
                ans=max(ans,ansaa);
            }
        }
    }
    else if(n=m+1)
    {
        for(int i=0; i<n; i++)
        {
            int anss=a[0];
            if(i==0)
            {
                anss=a[1];
                for(int j=1; j<n; j++)
                {
                    anss=anss&a[j];
                }
                ans=max(ans,anss);
            }
            else
            {
                for(int j=0; j<i; j++)anss&=a[j];
                for(int k=i+1; k<n; k++)anss&=a[k];
                ans=max(ans,anss);
            }
        }
    }
    else if(c==n){
        sort(a,a+n);
        cout<<a[n-m];
    }
    else if(m==3)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                for(int k=j+1;k<n;k++){
                    int ansaa=a[i]&a[j]&a[k];
                ans=max(ans,ansaa);
                }

            }
        }
    }
    cout<<ans;
    return 0;
}
