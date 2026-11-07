#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    long long n,m;int mx=-9999;
    int a[200005];
    cin>>n>>m;
    for(long long i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(m==1)cout<<a[n-1];
    else if(m==n){
        mx=a[0];
        for(long long i=1;i<n;i++){
            mx&=a[i];
        }
        cout<<mx;
    }
    else if(m==2){
        for(long long i=0;i<n;i++){
            for(long long j=i+1;j<n;j++){
                mx=max(mx,(a[i] & a[j]));
            }
        }
        cout<<mx;
    }
    else cout<<0;
    return 0;
}
