#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char b[200010];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n,sum1=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        sum1+=a[i];
    }
    long long ans=0;
    long long sum=1;
    long long e=0;
    for(long long i=1;i<=sum1/2;i++)
    {
        if(sum1%2==0)
        {
            if(i==sum)
            {
                if(sum==1) sum=sum+a[i]-1;
                else sum+=a[i];
                e++;
            }
            if(b[e] != b[n+e-i+1])
            {
                ans++;
            }
        }
        if(sum1%2==1)
        {
            if(i==sum)
            {
                if(sum==1) sum=sum+a[i]-1;
                else sum+=a[i];
                e++;
            }
            if(b[e] != b[n-i+e])
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
