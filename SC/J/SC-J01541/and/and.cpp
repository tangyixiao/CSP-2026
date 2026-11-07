#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,m,a[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum=a[n];
	sort(a+1,a+n+1);
	for(int i=n;m>0;i--,m--){
		sum=sum & a[i];
	}
	cout<<sum;
	return 0;
}