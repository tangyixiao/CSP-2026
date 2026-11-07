#include<bits/stdc++.h>
using namespace std;
int a[500010],b[500010],d[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    int n,m,t,y=0;
    cin>>n>>m;
    int c=0;
    int r=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int f=1;f<=n;f++)
    {
        r++;
        c=y;
        for(int i=1;i<=n;i++)
        {
           for(int j=1;j<=n;j++)
           {
               if(r%2==1)
               {
                   if(a[i]==a[j] && i!=j)
                   {
                       for(int k=i+1;k<=j;k++)
                       {
                            c++;
                            b[c]=a[k];
                            a[k]=0;
                       }
                   }
               }
               if(r%2==0)
               {
                   if(b[i]==b[j] && i!=j)
                   {
                       for(int k=i+1;k<=j;k++)
                       {
                            c++;
                            a[c]=b[k];
                            b[k]=0;
                       }
                   }
               }
           }
        }
        t=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]!=0)
            {
                t++;
                a[t]=a[i];
                a[i]=0;
            }
        }
        y=t;
        for(int i=1;i<=n;i++)
        {
            if(r%2==1)
            {
                if(a[i]!=0) d[a[i]]++;
            }
            else{
                 if(b[i]!=0) d[b[i]]++;
            }
        }
    }
    for(int i=1;i<=m;i++)
    {
        cout<<d[i]<<" ";
    }
}
