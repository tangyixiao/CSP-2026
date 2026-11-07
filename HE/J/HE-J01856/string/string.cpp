#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[100005];
	char c[1000005];
	long long ans;
	bool flag=false;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		ans+=a[i];
	}
	for(int i=1;i<=n;i++){
		if(c[i]==c[i+1]) flag=true;
	}
	if(flag) cout<<"0";
	else cout<<ans/2;
	return 0;
}
