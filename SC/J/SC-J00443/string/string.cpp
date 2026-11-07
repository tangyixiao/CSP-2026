#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string a;
	int n;
	cin>>n;
	int l1=0;
	for(int i=1;i<=n;i++){
		int e;
		char c;
		cin>>e>>c;
		l1+=e;
		a+=string(e,c);
	}
	int ans=0;
		for(int i=1;i<=l1/2;i++){
			if(a[i]!=a[l1-i]){
				ans++;
			}
		}
	
	cout<<ans;
	return 0;
}