#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("card1.in",r,stdin);
    freopen("card.out",w,stdout);
    int hk416[5000],hk416d[5000];
    int hk417[5000];
    int hkm27[5000];
    bool hkg28[5000];
    int ak12,ak308,m1a2;
    cin>>ak12>>ak308;
    for(int i=0;i<ak12;i++)
    {
        cin>>hk416[i];
        hk416d[i]=hk416[i];
    }
    for(int i=0;i<ak12;i++)
    {
        for(intj=0;i+j<ak12;j++)
        {
            if(hk416d[j+i]!=1)
            hk417[j]=hk416[j+i];
            for(int z=0;z<=j;z++)
            {
                if(hk417[z]==hk417[j] && z<=m1a2)
                {
                    for(int k=z;k<j;k++)
                    {
                        hk416d[k]=1;
                    }
                    m1a2=z;
                }
            }
        }
        for(int j=0;j<=m1a2;j++)
        {
            hkg28[j]=0;
        }
        for(int j=0;j<=m1a2;j++)
        {
            if(hkg28[j]==0)
            {
                hkm27[hk417[j]-1]++;
                hkg28[j]=1;
            }

            hk417[j]=0;
            hk416d[j]=0;
        }
        m1a2=5001;
    }
    for(int i=0;i<ak308;i++)
    {
        cout<<hkm27[i]<<" ";
    }
    fclose("card1.in");
    fclose("card.out");
    return 0;
}
