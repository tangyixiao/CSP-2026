#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+99;
int a[N],n,m,ans;
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	for(int l=1;l<=n-m;l++){
		ans=a[l];
		for(int i=l;i<l+m;i++){
			ans=(ans&a[i]);
		}
		if(ans!=0){
			break;
		}
	}
	cout<<ans;
}
