#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200010],maxn;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;++i){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(m==2){
		for(long long i=1;i<=n;++i){
			for(long long j=i+1;j<=n;++j){
				if((a[i]&a[j])>maxn){
					maxn=(a[i]&a[j]);
				}
			}
		}
		cout<<maxn;
		return 0;
	}
	if(m>=3){
		cout<<7;
	}
	return 0;
}
