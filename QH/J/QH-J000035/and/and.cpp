#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[200005];
int v[200005];
string s[200005];
int n,m;
int mx;
 void dfs(int x,int d,int u){
     if(u<=mx){
         return ;
     }
     if(x==m){
         mx=max(mx,u);
     }
     if((m-d)+x-1>n){
         return ;
     }
     if(d>n){
     	return ;
	 }
     dfs(x+1,d+1,u&v[d]);
     dfs(x,d+1,u);
 }
bool f(int mid){
    int sum=0;
    for(int i=1;i<=n;i++){
        if((v[i]&mid)>=mid){
            sum++;
            //cout<<mid <<" ";
        }
    }
    return sum>=m;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>v[i];
	} 
    // for(int i=1;i<=n;i++){
    //     int x=v[i];
    //     while(x!=0){
    //         s[i]=to_string(x%2)+s[i];
    //         x/=2;
    //     }
    // }
    if(n>1000){
	 memset(dp,0x3f,sizeof(dp));
	 sort(v+1,v+1+n);
	 for(int i=1;i<=n;i++){
        for(int j=min(i,m);j>0;j--){
	 	    if(dp[j]==0x3f3f3f3f3f3f3f3f){
	 	    	dp[j]=dp[j-1]&v[i];
	 	    }
	 	    dp[j]=max(dp[j],dp[j-1]&v[i]);
        }
	 }
	 cout<<dp[m];
	 return 0;
	}
//    int l=0,r=INT_MAX;
//    int ans=-1;
//    while(l<=r){
//        int mid=(l+r)>>1;
//        if(f(mid)){
//            l=mid+1;
//            ans=mid;
//        }else{
//            r=mid-1;
//        }
//    }
//    cout<<ans;
    dfs(0,1,0x3f3f3f3f3f3f3f3f);
    cout<<mx;
	return 0;
} 
/*
5 3
31 3 1 15 7

4 2
3 15 12 12

*/
