#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+3;
int n,m,a[N],ch[N],ans;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ch[i]=1;
	}
	for(int b=29;b>=0;b--){
		int sum=0;
		for(int i=1;i<=n;i++){
			int miu=((a[i]>>b)&1);
			if(ch[i]) sum+=miu;
		}
		if(sum<m) continue;
		ans+=(1<<b);
		for(int i=1;i<=n;i++){
			int miu=((a[i]>>b)&1);
			if(!miu) ch[i]=0;
		}
	}
	cout<<ans;
}
