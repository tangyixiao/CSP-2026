#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a[100009],cnt=-1;
ll cnt_[1000009];  //4 2 3 15 12 12
ll n,m,ans=-1,k=0; 

void dfs(ll x,ll now){  //x:已经选了几个数 ,now:当前选择的位置 
	if(x==m){
		ans=max(ans,cnt);
		return;
	}
	
	if(m-x<n-now){
		dfs(x,now+1);
	}
	cnt_[++k]=cnt;
	if(cnt==-1){
		cnt=a[now+1];
	}else cnt= cnt & a[now+1];
	dfs(x+1,now+1);
	cnt=cnt_[k];
	k--;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	dfs(0,0);
	
	cout<<ans<<endl;
	
	return 0;
}
