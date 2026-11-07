#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char b[200005];
long long cnt,pre[200005],ans;
int s(long long x){
	int t=1;
	for(int k=1;k<=n&&x>pre[k];k++){
		t++;
	}
	return t;
}
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>b[i];
		pre[i]=pre[i-1]+a[i];
		cnt+=a[i];
	}
	for(long long i=1; i*2<=cnt+1; i++) {
		if(b[s(i)]!=b[s(cnt-i+1)]) ans++;
	}
	cout<<ans;
	return 0;
}
