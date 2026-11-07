#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(x) (x).begin(),(x).end()
using namespace std;
int ans=-1,n,m;
vector<int> v,b;
vector<bool> ok;
void ad(int step){
	if(step==m+1){
		int tmp=b[0];
		for(int i=1;i<b.size();i++)	tmp=(tmp&b[i]);
		ans=max(ans,tmp);
	}
	for(int i=0;i<n;i++){
		if(!ok[i]){
			b.pb(v[i]);
			ok[i]=true;
			ad(step+1);
			ok[i]=false;
			b.pop_back();
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	v.resize(n+1);
	ok.resize(n+1);
	for(int i=0;i<n;i++)	cin>>v[i];
	ad(1);
	cout<<ans;
	return 0;
}