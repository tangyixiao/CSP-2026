#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m;
long long a[N];
void solveb(){
	cout<<a[n-m+1];
	return ;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool flagb=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1){
			flagb=0;
		}
	}
	if(flagb==1){
		solveb();
		return 0;
	}
	sort(a+1,a+1+n);
	int ans=0;
	for(int i=n;i>=m;i--){
		int nans=a[i];
		for(int j=1;j<=m;j++){
			nans&=a[i-j+1];
		}
		ans=max(ans,nans);
	}
	cout<<ans;
	return 0;
} 