#include<bits/stdc++.h>
#define int long long
#define inf 0x3f3f3f3f3f3f3f3f
#define Code ios::sync_with_stdio(0);
#define by cin.tie(0);
#define Co_led cout.tie(0);
#define VNAME(x) #x
#define C(x) cout<<VNAME(x)<<":"<<x<<endl;
using namespace std;
int n,m,a[200500],mx=-1;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	Code by Co_led
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(!a[n]){
		cout<<0;
		return 0;
	}
	int ans=0;
	for(int i=log2(a[n]);i>=0;i--){
		int x=0;
//		cout<<"i:"<<i<<endl;
		for(int j=n;j>=1;j--){
//			cout<<a[j]<<" "<<((a[j]&ans)==ans)<<" "<<((a[j]>>i)&1)<<" "<<(1<<i)<<endl;
			if(((a[j]&ans)==ans) and ((a[j]>>i)&1)){
				x++;
//				cout<<x<<" "<<a[j]<<endl;
			}
		}
		if(x>=m){
			ans|=(1<<i);
		}
//		cout<<endl<<x<<" "<<ans<<endl;
	}
	cout<<ans;
	return 0;
}//100
/*
4 2
3 15 12 12
*/
/*
12
*/
