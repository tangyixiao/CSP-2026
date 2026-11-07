#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,a[N],ans;
char c[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int i=1,j=n;
	while(i<j){
		int cnt=min(a[i],a[j]);
		a[i]-=cnt,a[j]-=cnt;
		if(c[i]!=c[j]) ans+=cnt;
		if(!a[i]) i++;
		if(!a[j]) j--;
	}
	cout<<ans;
	return 0;
} 