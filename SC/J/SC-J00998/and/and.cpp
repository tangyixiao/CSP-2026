#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int  a[20005];
int main(){
	freopen("ans.in","r",stdin);
	freopen("ans.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	ans=a[n];
	for(int i=m;i>0;i--){
		ans=ans&a[n];
		n--;
	}
	cout<<ans;
	return 0;
}