#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,ans,a[N];
bool use[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],use[i]=1;
	for(int i=29;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++) if(use[j]&&(a[j]&(1<<i))) cnt++;
		if(cnt>=m){
			ans+=(1<<i);
			for(int j=1;j<=n;j++) if(!(a[j]&(1<<i))) use[j]=0;
		}
	}
	cout<<ans;
	return 0;
}