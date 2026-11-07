#include<bits/stdc++.h>
using namespace std;
int n,m;
int maxn,sum;
int ans;
int a[200005];
void dfs(int z,int id,int c){
	//cout<<c<<" ";
	if(z==m){
		ans=max(ans,c);
		//cout<<c<<" ";
		return;
	}
	if(id==n+1) return;
	if(c==0&&z>0) return;
	if(z==0){
		dfs(1,id+1,a[id]);
		dfs(0,id+1,0);
	}
	else{
		dfs(z+1,id+1,c&a[id]);
		dfs(z,id+1,c);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	//for(int i=1;log(i)<=30;i*=2) cout<<i<<" ";
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
		//minn=min(minn,a[i]);
		if(i==1) sum=a[i];
		else sum&=a[i];
	}
	if(n==m){
		cout<<sum;
		return 0;
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(maxn==0){
		cout<<0;
		return 0;
	}
	if(maxn<4){
		int cnt=0,cnt2=0,cnt1=0;
		for(int i=1;i<=n;i++){
			if(a[i]==3) cnt++;
			else if(a[i]==2) cnt2++;
			else if(a[i]==1) cnt++,cnt1++;
		}
		if(cnt>=m&&maxn==3){
			cout<<3;
			return 0;
		}
		if(cnt2>=m&&maxn==2){
			cout<<2;
			return 0; 
		}
		if(cnt1>=m) cout<<1;
		return 0;
	}
	if(n<=20){
		dfs(0,1,0);
		cout<<ans;
	}
	return 0;
} 
