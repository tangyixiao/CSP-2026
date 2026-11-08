#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int ma=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		ma&=a[i];
	}
	cout<<ma;
	return 0;
}
