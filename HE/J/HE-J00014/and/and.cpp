#include<bits/stdc++.h>
using namespace std;
const int N=2e5+3;
int n,m,a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}else if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}else if(m==2){
		int cnt=1,b[N];
		for(int i=2;i<=n;i++){
			b[cnt++]=(a[i-1]&a[i]);
		}
		sort(b+1,b+n+1);
		cout<<b[cnt];
		return 0;
	}
	return 0;
}
