#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,a[N],ans=0,cnt=0;
string c[N];
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	if(n==2){
		if(c[1]==c[2]){
			cout<<0;
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		ans=max(a[i],ans);
	}
	cout<<ans;
	return 0;
}
