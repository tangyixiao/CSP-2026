#include<bits/stdc++.h>
using namespace std;
long long a[200005];
bool vis[200005];
int n,m;
long long ans=0;long long sum=0,cnt=0,l=1;
void dfs(){
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=l;i<=n;i++){
		if(vis[i]==0){
			if(sum==0){
				sum+=a[i];
			}else{
				sum&=a[i]; 
			}
			cnt++;
			vis[i]=1;
			dfs();
			sum=0;
			cnt=0;
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	dfs();
	cout<<ans;
	return 0;
}