#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
struct qq{
	int q;
	char w;
}a[200010];
int n,m,k,v,ma;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(nullptr)->sync_with_stdio(0);
	cout.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].q>>a[i].w;
	}
	for(int i=1;i<=n/2;i++){
		if(a[i].w!=a[n-i+1].w){
			if(k>0){
				v+=min(a[i].q,a[n-i+1].q+k);
			}
			else{
				v+=min(a[i].q-k,a[n-i+1].q);
			}
		}
		else{
			v+=abs(k);
		}
		k=a[i].q-a[n-i+1].q;
	}
	if(n%2==0){
		cout<<v;
	}
	else{
		cout<<v+k;
	}
	return 0;
}