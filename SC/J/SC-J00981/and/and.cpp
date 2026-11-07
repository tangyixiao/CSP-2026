#include <iostream>
using namespace std;
const int man=2e5+10;
long long a[man],vis[man],n,m,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=31;i>=0;i--){
		long long pw=1LL<<i,res=0;
		for(int j=1;j<=n;j++){
			if(vis[j])continue;
			if(a[j]&pw)res++;
		}
		if(res>=m){
			ans+=pw;
			for(int j=1;j<=n;j++){
				if(!(a[j]&pw))vis[j]=1;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}