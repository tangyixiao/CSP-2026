#include <bits/stdc++.h>

using namespace std;
#define int long long
const int maxn=2e5+5;
int n,m,ans=-1;
int a[maxn];
void dfs(int id,int AND,int cot){
	if(id>n&&cot<m) return ;
	if(cot==m){
		ans=max(ans,AND);
		return ;
	}
	dfs(id+1,AND,cot);
	if(AND==-1) dfs(id+1,a[id],cot+1);
	else dfs(id+1,AND&a[id],cot+1);
}
bool check(int n){
	n++;
	while(n){
		if(n%2&&n!=1) return false;
		n/=2;
	}
	return true;
}
signed main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=30){
		dfs(1,-1,0);
		cout<<ans;
		return 0;
	}
	if(m==1){
		int mx=-1;
		for(int i=1;i<=n;i++) mx=max(mx,a[i]);
		cout<<mx;
		return 0;
	}
	if(m==2){
		int ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
		return 0;
	}
	bool okA=true;
	for(int i=1;i<=n;i++) okA&=check(a[i]);
	if(okA){
		vector<int>x;
		for(int i=1;i<=n;i++) x.push_back(log2(a[i]+1));
		sort(x.begin(),x.end(),greater<int>());
		cout<<pow(2,x[m-1])-1;
	}else{
		set<int>st;
		for(int i=1;i<=n;i++) st.insert(a[i]);
		if(st.size()==1) cout<<a[1];
		else cout<<0;
	} 
	return 0;
}
/*
5 3
31 3 1 15 7
*/