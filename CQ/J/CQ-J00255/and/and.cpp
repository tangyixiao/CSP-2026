#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,a[N],ans;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++)
			if(((ans&a[j])==ans)&&(a[j]&(1<<i)))
				cnt++;
		if(cnt>=m)
			ans+=(1<<i);
	}
	cout<<ans;
	return 0;
}
