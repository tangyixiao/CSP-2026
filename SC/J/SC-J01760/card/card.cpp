#include<bits/stdc++.h>
using namespace std;
long long m,n,a[500005],ans[300005];
long long p,s[300005];
void solve(int l){
	vector<long long> b;
	p=l;
	for(int i=l;i<=n;i++){
		i=s[a[i]];
		ans[a[i]]++;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		solve(i);
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 