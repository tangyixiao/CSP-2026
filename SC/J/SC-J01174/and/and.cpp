#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	vector<long long> a(n+1,0);
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=2;j<=n;j++){
			if(a[j]>a[j-1]){
				swap(a[j],a[j-1]);
			}
		}
	}
	long long ans=a[1];
	for(long long i=2;i<=m;i++){
		ans&=a[i];
	}
	cout<<ans;
    return 0;
}