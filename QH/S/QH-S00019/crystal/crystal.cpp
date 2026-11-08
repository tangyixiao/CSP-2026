#include<bits/stdc++.h>
using namespace std;
#define int long long
int v[500005];
//int f[500005];
// int f(int mid){

// }
signed main(){
    freopen("crystal.in", "r", stdin);
    freopen("crystal.out", "w", stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        //f[i]=v[i]-v[i-1];
    }
    sort(v+1,v+n+1);
    // for(int i=1;i<=n;i++){
    //     f[i]=v[i]-v[i-1];
    // }
    // int mid=(1+n)>>1;
    // for(int i=mid;i>0;i--){
    //     if(v[mid]-v[i]<=m){
    //         m-=v[mid]-v[i];
    //         v[i]=v[mid];
    //     }
    // }
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     if(v[i]==v[mid]){
    //         sum++;
    //     }
    // }
    // cout<<sum;
    // int l=1,r=INT_MAX;
    // int ans=0;
    // while(l<=r){
    //     int mid=(l+r)>>1;
    //     if(f(mid)){
    //         ans=mid;
    //         l=mid+1;
    //     }else{
    //         r=mid-1;
    //     }
    // }
    int mx=0;
    int s=0;
    int mid=n;
    int cnt=1;
    for(int i=n-1;i>0;i--){
        if(s+(v[mid]-v[i])<=m){
            s+=(v[mid]-v[i]);
            cnt++;
            mx=max(mx,cnt);
            //cout<<1<<" ";
            //cout<<cnt<<" "<<s<<" "<<mid<<endl;
        }else{
        	//cout<<2<<" ";
            while(s-(v[mid]-v[mid-1])*(cnt-1)+(v[mid-1]-v[i])>m&&cnt!=0){
                s=s-(v[mid]-v[mid-1])*(cnt-1);
                cnt--;
                mid--;
                //cout<<"x"<<" ";
            }
            //cout<<cnt<<" "<<s<<" "<<mid<<endl;
            s=s-(v[mid]-v[mid-1])*(cnt-1)+(v[mid-1]-v[i]);
            mid=mid-1;
            mx=max(mx,cnt);
        }
    }
    cout<<mx;
    return 0;
}
