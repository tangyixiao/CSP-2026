#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,ans,cnt=1;
long long a[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	ans=a[n];
	for(int i=n-1;i>=0;i--){
		cnt++;
		ans&=a[i];
		if(cnt==m) break;
	}
	cout<<ans;
	return 0;
}
