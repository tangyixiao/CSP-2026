#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	int x=(n+1)/2;
	int y=m/2;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int ans=-1; 
	for(int i=x-y;i<=x+y;i++){
//		cout<<i<<" ";
		ans=(ans&a[i]);
	}
	cout<<ans;
	return 0; 
}
