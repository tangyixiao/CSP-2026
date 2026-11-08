#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
int a[N];
int main(){
    freopen("and.in","w",stdin);
    freopen("and.out","r",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=a[0];
    if(m==1){
        for(int i=0;i<n;i++){
            ans=max(ans,a[i]);
        }
    }else if(m==n){
        for(int i=1;i<=n;i++){
            ans&=a[i];
        }
    }else if(m==2){
        ans=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans=max(ans,(a[i]&a[j]));
            }
        }
    }else{
        sort(a,a+n,greater<int>());
        for(int i=1;i<m;i++){
            ans&=a[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}