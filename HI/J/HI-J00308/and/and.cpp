#include<bits/stdc++.h>
using namespace std;
int m,n;
typedef long long ll;
const int N=2e5+10;
ll a[N],ans,cnt[50];
const ll INF=0x3f3f3f;
void dfs(int step,int xuan,ll sum){
	if(step>n&&xuan==m){
		ans=max(ans,sum);
	//	cout<<sum;
	    return ;
	}
	if(step>n) return ;
	dfs(step+1,xuan+1,sum&a[step]);
	dfs(step+1,xuan,sum);
	
}
void dfs1(int step,ll sum){
	if(step<0){
		ll xuan=0; 
		for(int i=1;i<=n;i++) {
			if((a[i]&sum)>=sum) {
			xuan++;
			}
		}
		if(xuan>=m) {
			ans=max(ans,sum);
		}
		return ;
	}
     if(cnt[step]>=m)dfs1(step-1,sum+(1<<step));
     if(ans==0)dfs1(step-1,sum);
}
int main(){
  freopen("and.in","r",stdin);
  freopen("and.out","w",stdout);
  cin>>n>>m;
  for(int i=1;i<=n;i++) {
  cin>>a[i];
  for(int j=0;j<=30;j++){
  	if(a[i]&(1<<j)) cnt[j]++;}
  }
   if(n<=20) {
  	dfs(1,0,INF);
  	cout<<ans;
  	return 0;
  }
  if(m==1){
  	for(int i=1;i<=n;i++) ans=max(ans,a[i]);
  	cout<<ans;
  	return 0;
  }
  if(m==2&&n<=2000){
  	for(int i=1;i<=n;i++){
  		for(int j=i+1;j<=n;j++){
  			ans=max(ans,a[i]&a[j]);
		  }
	  }
	cout<<ans;
	return 0;
  }
  if(m==n){
  	ans=INF;
  	for(int i=1;i<=n;i++){
  		ans=(ans&a[i]);
	  }
	  cout<<ans;
	  return 0;
  }
  else{
  	dfs1(30,0);
  	cout<<ans;
  }
  return 0;	
}
