#include<bits/stdc++.h>
using namespace std;
int n,m;
long long  ans;
const int N=1e7+5;
long long a[N];
bool ok(long long x,long long y){
	long long k=x&y;
	if(y!=0 && k!=0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	ans=a[n];
	long long x=n-1;
	m--;
	while(m--){
		if(ok(ans,a[x])){
			ans&=a[x];
			x--;
		}
		else{
			while(!ok(ans,a[x])){
				x--;
			}
		}
	}
	cout<<ans;
	return 0;
}