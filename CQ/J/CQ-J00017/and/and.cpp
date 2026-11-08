#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],ans,vis[200005],dis[200005];
int lg2(int x){
	int l=1,r=30,sum=0;
	while(l<=r){
		int mid=l+r>>1;
		if(pow(2,mid)<=x){
			sum=mid;
			l=mid+1;
		}else r=mid-1;
	}
	return sum;
}
bool check2(){
	for(int i=1;i<=n;i++){
		int xx=lg2(a[i]+1);
		if(a[i]+1!=pow(2,xx))return 0;
	}
	return 1;
}
bool check(int x){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(lg2(a[i]+1)>=x)cnt++;
	}
	return cnt>=m;
}
//20 18
//3 7 15 31 63 51 41 55 77 53 3 7 15 31 63 51 41 55 77 53
void dfs(int x,int xs){
//	cout<<x<<' '<<xs<<endl;
	if(xs==1)return;
	if(x==m){
		ans=max(ans,xs);
		return;
	}
	if(dis[x]>xs&&xs!=-1)return;
	dis[x]=xs;
	if(xs==-1){
		for(int i=1;i<=n;i++){
			vis[i]=1;
			dfs(1,a[i]);
			vis[i]=0;
		}
	}else{
		for(int i=1;i<=n;i++){
			if(vis[i])continue;
			vis[i]=1;
			dfs(x+1,xs&a[i]);
			vis[i]=0;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=20){
		dfs(0,-1);
		cout<<ans;
	}else if(m==1){
		for(int i=1;i<=n;i++)ans=max(ans,a[i]);
		cout<<ans;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i)continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}else if(check2()){
		for(int i=30;i>=1;i--){
			if(check(i)){
				cout<<pow(2,i)-1;
				return 0;
			}
		}
	}else{
		int kk=lg2(m),kkm=lg2(m);
		cout<<pow(2,kk)-1-pow(2,kkm);
	}
	return 0;
}
