#include <bits/stdc++.h>
using namespace std;
int m,n,v[200010]={0},dp[200010]={0};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	for(int i=1;i<=n;i++){
		if(v[i]==v[i+1]){
			cout<<v[i];
		}
	}
	return 0;
}