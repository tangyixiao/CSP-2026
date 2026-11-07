#include <bits/stdc++.h>
using namespace std;
const long long N=1e6+10;
long long a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	long long maxn=0;
	sort(a+1,a+n+1,greater<long long>());
	long long i=1;
	long long cnt=a[1];
		while(m--){
			cnt=cnt&a[i];
			i++;
		}
	cout<<cnt;
	return 0;
}
