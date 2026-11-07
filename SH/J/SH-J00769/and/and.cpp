#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll ans,a[200005];
ll sum[200005];
bool cmp(ll a,ll b){
	return a>b;
}
void dfs(ll p,ll cnt,ll res){//0&任何数都是0 
	if(m-cnt>n-p+1 or cnt!=0 and res==0)return;//剪枝 
	if(cnt==m){
		ans = max(res,ans);
		return;
	}
	if(cnt==0){
		dfs(p+1,cnt+1,a[p]);
	}
	else{
		dfs(p+1,cnt+1,res&a[p]);
	}
	dfs(p+1,cnt,res);
}
int main(){

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin>>n>>m;
	bool flag=0;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(a[i]==2)flag=1;
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[1];
	if(a[1]==a[2]){
		cout<<a[1];
		return 0;
	}
	if(a[m]==0){//只能选m个数，所以必须&0,所以ans=0 
		cout<<0;
		return 0;
	}
	if(a[1]<4){
		if(a[1]==1){//当最大为1时,最小也是1,(0已排除) 
			cout<<1;
		}
		else if(a[1]==2){//当最大为2时, 
			if(a[m]==2){//当最小为2 
				cout<<2;
			}
			else{//当最小为1 
				cout<<1;
			}
		}
		else{
			if(a[m]==3){//当最大为3,最小为3时 
				cout<<3;
			}
			else if(a[m]==2){//当最小为2时 
				cout<<2;
			}
			else if(a[m]==1){//当最小为1时 
				if(!flag){
					cout<<1; 
				}
				else{
					cout<<0;
				}
			}
		}
		return 0;
	}
	dfs(1,0,0);
	cout<<ans;
	return 0;
}

