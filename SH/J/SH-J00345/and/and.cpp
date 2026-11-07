#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int ls;cin>>ls;
		ans=max(ls,ans);
	}
	cout<<ans;
	return 0;
} 
