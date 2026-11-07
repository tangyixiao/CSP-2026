#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m;
int a[N];
int maxn;
int sum;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--){
		for(int j=1;j<m;j++){
			sum+=a[i]&a[i-j];
		}
		maxn=max(maxn,sum);
		sum=0;
	}
	cout<<maxn;
	return 0;
}
