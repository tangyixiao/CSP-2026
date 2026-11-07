#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
long long n,m;
long long maxn,mexn;
long long a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	maxn = -N;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		maxn = max(maxn,a[i]);
	}
	if(m == 1){
		cout<<maxn;
		return 0;
	}
	mexn = -N;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			mexn=max(maxn,a[i] & a[j]);
		}
	}
	cout<<mexn;
	return 0;
}
