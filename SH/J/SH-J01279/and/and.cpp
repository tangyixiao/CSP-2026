#include<bits/stdc++.h>
using namespace std;
bool tepanA(int n)
{
    for(int i=1;i<=20;i++)
    {
        if(n==pow(2,i)-1) return true;
    }
    return false;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,a[2000005];
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    int maxn=-1,sum=a[1];
    if(m==1){
        for(int i=1;i<=n;i++)
        {
            if(maxn<a[i]) maxn=a[i];
        }
        cout<<maxn;
        return 0;
    }
    else if(m==2){
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if((a[i]&a[j])>maxn) maxn=(a[i]&a[j]);
            }
        }
        cout<<maxn;
        return 0;
    }
    else if(m==n){
        for(int i=2;i<=n;i++)
        {
            sum=sum&a[i];
        }
        cout<<sum;
        return 0;
    }
    bool flag=0,flag1=0;
    int minn=1e8;
    for(int i=1;i<=n;i++)
    {
        if(!tepanA(a[i])){
            flag=1;
            break;
        }
    }
    if(!flag){
        sort(a+1,a+n+1);
        cout<<a[m];
        return 0;
    }
    if(m==n-1){
        cout<<0;
        return 0;
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(!(a[i]==i-1)){
            flag1=1;
            break;
        }
    }
    if(!flag){
        if(m>=n/2){
            cout<<0;
            return 0;
        }
    }
    return 0;
}
