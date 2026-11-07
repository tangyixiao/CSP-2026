#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;long long in;
    cin>>n>>m;
    vector<long long> a;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        a.push_back(in);
    }
    int ans=-1;
    if(m==1){
        sort(a.begin(),a.end());
        cout<<a[n-1];return 0;
    }
    else if(m==2){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
            {
                ans = max(ans,int(a[i]&a[j]));
            }
        }
    }
    else if(m==n){
        ans=a[0];
        for(int i=1;i<n;i++){
            ans = int(a[i]&ans);
        }
    }else{
        int q=n-m;
        sort(a.begin(),a.end());
        ans=a[q];
        for(int i=q+1;i<n;i++){
            ans = int(a[i]&ans);
        }
    }
    cout<<ans;
    return 0;
}
