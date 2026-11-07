#include<bits/stdc++.h>
#define int long long
using namespace std;
int s[2000100];
signed main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m,x;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		s[x]++;
	}
	int ans;
	for(int i=1;i<=m;i++){
		ans = s[i];
		if(s[i]==0){
			i-=1;
		}
	}
	cout<<ans;
	return 0;
}
