#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],ans,t[200005],_ans;
bool f[200005];
void dfs(int im){
	if(im==m){
		_ans=t[0];
		for(int i=1;i<m;i++){
			_ans&=t[i];
		}
		ans=max(ans,_ans);
		return;
	}
	else{
		for(int i=0;i<n;i++){
			if(f[i]==false){
				t[im]=a[i];
				f[i]=true;
				dfs(im+1);
				f[i]=false; 
			}
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dfs(0);
	cout<<ans;
	return 0;
}
