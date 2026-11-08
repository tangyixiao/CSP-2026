#include<bits/stdc++.h>
using namespace std;
namespace MoonHalfx{
	#define int long long 
	const int N=5e5+5;
	int n,m;
	int a[N];
	int ym[N];
	signed main(){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			int tot=0,res=a[i];
			while(res)ym[tot++]+=res&1,res>>=1;
		}
		sort(a+1,a+n+1);
		int ans=0,lms=1;
		for(int i=29;i>=0;i--){
			int mx=1<<i;
			if(ym[i]>=m){
				ans+=mx;
				int tot=0;
				while(a[lms]<mx){
					int tot=0,res=a[lms];
					while(res)ym[tot++]-=res&1,res>>=1;
					lms++;
				}
			}
			for(int j=lms;j<=n;j++)if(a[j]>=mx)a[j]-=mx;
			sort(a+lms,a+n+1);
		}
		cout<<ans<<"\n";
		return 0;
	}
	#undef int
}	
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	MoonHalfx::main();
	return 0;
}
