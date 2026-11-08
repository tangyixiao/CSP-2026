#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int a[500005];
ll t[300005];
ll f[500005];
ll p[500005];
ll q[500005];
int main(){
	ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	unordered_map<int,int>mp;
	for(int i=n;i>=1;i--){
		q[i]=1;
		if(!mp.count(a[i])){
			f[i]=i+1;
			p[i]=a[i];
		}else{
			f[i]=mp[a[i]];
			p[i]=0;
		}
		mp[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		q[f[i]]+=q[i];
		t[p[i]]+=q[i];
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}

