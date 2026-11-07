#include<bits/stdc++.h>
#define frein(x) freopen(x".in","r",stdin)
#define freout(x) freopen(x".out","w",stdout)
#define cinios cin.tie(0)->ios::sync_with_stdio(0)
using namespace std;
using ll=long long;
const int N=2e5+10;
int a[N];
int n,m;
bool cmp(int x,int y){
	return x>y;
}
int dfs(int k,int ans,int x){
	if(k>=m) return ans;
	for(int i=x;i<=n;i++){
		if(ans&a[i]){
			ans&=a[i];
			ans=max(ans,dfs(++k,ans,i));
		}else return ans;
		
	}
	return ans;
}
int main(){
	frein("and");
	freout("and");
	cinios;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}else{
		int ans=0;
		for(int i=1;i+m<=n;i++){
			ans=max(ans,dfs(1,a[i],i));
			cout<<i<<" "<<ans<<"\n";		
		}
		cout<<ans;
	}
	return 0;
}