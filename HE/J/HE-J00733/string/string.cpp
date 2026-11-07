#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,c;
    long long a;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a>>c;
    }

    string sum;
    for(long long t=1;t<=n;t++)
    {
        for(long long l=1;l<=a;l++)
        {
            sum+=c;
        }
    }
    int l=1;
    int r=sum.size();
    int mid=r/2;
    int cnt=0;
    for(int p=1;p<=mid;p++){
    if(sum[mid-1]!=sum[mid+1])
    {
        sum[mid+1]=sum[mid-1];
        cnt++;
    }}
    cout<<cnt;

    return 0;
}
