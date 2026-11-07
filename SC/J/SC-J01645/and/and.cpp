#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
ll n,a[N],m,dp[N],ans;
string c;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	ans=a[n];
	for(int i=n;i>=n-m+1;i--){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}