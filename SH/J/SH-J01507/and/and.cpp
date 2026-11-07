#include<iostream>
using namespace std;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    long long n,m,middle,ad;
    cin>>n>>m;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long long k=0;k<n-1;k++)
    {
        for(long long h=0;h<n-1;h++)
        {
            if(a[h]<a[h+1])
            {
                middle=a[h+1];
                a[h+1]=a[h];
                a[h]=middle;
            }
        }
    }
  //  for(int j=0;j<n;j++)
    //{
   //     cout<<a[j]<<'\n';
   // }
    ad=(a[0]&a[1]);
    //cout<<ad<<'\n';
    for(long long j=1;j<m-1;j++)
    {
            ad=(ad&a[j+1]);
     //       cout<<ad<<'\n';
    }
    cout<<ad;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
