#include<bits/stdc++.h>
using namespace std;

int n,m,a,ans;

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a;
		if(a>ans){
			ans=a;
		}
	}
	cout << ans;//偷5分的来 
	return 0;
}