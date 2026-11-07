#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n,m;cin>>n>>m;
	vector<int> a(n+1),b(n+1,0),d(m+1,0),e(m+1,0);
	//c中存点数i现在最近在哪里
	for(int i=1;i<=n;i++){
		cin>>a[i];
		d[a[i]]++;
		e[a[i]] = i;
	}
	for(int i=1;i<=n;i++){
		b[i] = e[a[i]];
	}
	vector<vector<int> > A(n+1);
	A[n] = {a[n]};
	for(int i=n-1;i>=1;i--){
//		if(b[i]!=0){
//			A[i] = A[b[i]];
//		}
		if(b[i]==i){
			A[i] = A[b[i+1]];
			A[i].push_back(a[i]);
		}
	}
	vector<int> C(m+1,0);
	for(int i=1;i<=n;i++){
		for(int j : A[i]){
			C[j]+=d[a[i]];
		}
	}
	for(int i=1;i<=m;i++) {
		cout<<C[i]<<' ';
	}
	return 0;
}