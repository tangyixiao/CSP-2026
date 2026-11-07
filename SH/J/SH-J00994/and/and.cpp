#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005];
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int max1=-1,sum=0;
    if(m==1)
    {
        for(int i=1;i<=n;i++)
        {
            if(a[i]>max1)
            {
                max1=a[i];
            }
        }
        cout<<max1;
        return 0;
    }
    if(m==2)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==j)
                {
                    continue;
                }
                sum=a[i]&a[j];
                if(sum>max1)
                {
                    max1=sum;
                }
            }
        }
        cout<<max1;
        return 0;
    }
    if(m==3)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    if(i==j||j==k||i==k)
                    {
                        continue;
                    }
                    sum=a[i]&a[j]&a[k];
                    if(sum>max1)
                    {
                        max1=sum;
                    }
                }
            }
        }
        cout<<max1;
        return 0;
    }
    if(m==4)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    for(int l=1;l<=n;l++)
                    {
                        if(i==j||j==k||k==l||i==k||j==l||i==l)
                        {
                            continue;
                        }
                        sum=a[i]&a[j]&a[k]&a[l];
                        if(sum>max1)
                        {
                            max1=sum;
                        }
                    }
                }
            }
        }
        cout<<max1;
        return 0;
    }
    if(m==5)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    for(int l=1;l<=n;l++)
                    {
                        for(int x=1;x<=n;x++)
                        {
                            if(i==j||j==k||k==l||l==x||i==k||j==l||k==x||i==l||j==x||i==x)
                            {
                                continue;
                            }
                            sum=a[i]&a[j]&a[k]&a[l]&a[x];
                            if(sum>max1)
                            {
                                max1=sum;
                            }
                        }
                    }
                }
            }
        }
        cout<<max1;
        return 0;
    }
    if(m==6)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    for(int l=1;l<=n;l++)
                    {
                        for(int x=1;x<=n;x++)
                        {
                            for(int y=1;y<=n;y++)
                            {
                                if(i==j||j==k||k==l||l==x||x==y||i==k||j==l||k==x||l==y||i==l||j==x||k==y||i==x||j==y||i==y)
                                {
                                    continue;
                                }
                                sum=a[i]&a[j]&a[k]&a[l]&a[x]&a[y];
                                if(sum>max1)
                                {
                                    max1=sum;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<max1;
        return 0;
    }
    if(m==7)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    for(int l=1;l<=n;l++)
                    {
                        for(int x=1;x<=n;x++)
                        {
                            for(int y=1;y<=n;y++)
                            {
                                for(int z=1;z<=n;z++)
                                {
                                    if(i==j||j==k||k==l||l==x||x==y||y==z||i==k||j==l||k==x||l==y||x==z||i==l||j==x||k==y||l==z||i==x||j==y||k==z||i==y||j==z||i==z)
                                    {
                                        continue;
                                    }
                                    sum=a[i]&a[j]&a[k]&a[l]&a[x]&a[y]&a[z];
                                    if(sum>max1)
                                    {
                                        max1=sum;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<max1;
        return 0;
    }
    return 0;
}
