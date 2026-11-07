#include <bits/stdc++.h>
using namespace std;
long long n,m,maxn;
const int T=1e4;
int a[T];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	std::ios::sync_whit_stdio(false);
	std::cin.tie(nullptr);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
    cout<<a[n];
	return 0;
}
