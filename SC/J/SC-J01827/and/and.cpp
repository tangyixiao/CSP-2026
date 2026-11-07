#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n,m;cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}if(n==1){
		return cout<<a[0],0;
	}
	sort(a.begin(),a.end());
	int ans = a[n-1]&a[n-2];
	for(int i=n-3;i>=n-m;i--){
		ans &= a[i];
	}
	if(n<=200){
		
		vector<bool> X;
		for(int i=1;i<=n-m;i++){
			X.push_back(0);
		}
		for(int i=1;i<=m;i++){
			X.push_back(1);
		}
		do{
			int Ans=INT_MAX;
			for(int i=0;i<n;i++){
				if(X[i]){
					Ans &= a[i];
					
				}
			}ans = max(Ans,ans);
//			cout<<'\n';
		}while(next_permutation(X.begin(),X.end()));
	}
	cout<<ans;
	return 0;
}