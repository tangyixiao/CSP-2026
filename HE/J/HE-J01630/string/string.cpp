#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans;
	for(int i=1;i<=n;i++){
		long long x;
		char c;
		cin>>x>>c;
		ans+=x;
	}
	cout<<ans;
	return 0;
}
