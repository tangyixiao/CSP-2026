#include<bits/stdc++.h>
using namespace std;
namespace lp{
	int n,m,a[200005],tmp,tmp2,ans;
	int main(){
		freopen("and.in","r",stdin);
		freopen("and.out","w",stdout);
		ios::sync_with_stdio(0);
		cin.tie(0),cout.tie(0);
		cin>>n>>m;
		for(int i=1;i<=n;i++)cin>>a[i];
		if(n<=20){
			for(int i=0;i<(1<<n);i++){
				tmp=-1,tmp2=0;
				for(int j=0;j<n;j++)if(i&(1<<j))tmp=(tmp==-1? a[j+1]:(tmp&a[j+1])),tmp2++;
				if(tmp2==m)ans=max(ans,tmp);
			}
		}
		else if(m==1){
			for(int i=1;i<=n;i++)ans=max(ans,a[i]);
		}
		else if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++)ans=max(ans,a[i]&a[j]);
			}
		}
		else if(m==n){
			ans=-1;
			for(int i=1;i<=n;i++)ans=(ans==-1? a[i]:(ans&a[i]));
		}
		cout<<ans;
		return 0;
	}
}
int main(){
	lp::main();
	return 0;
}

