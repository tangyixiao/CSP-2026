#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr int N=4e5+7;
int n,a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int l=1,r=n;ll res=0;
	while(l<r){
		int w=min(a[l],a[r]);
		res+=w*(c[l]!=c[r]);
		a[l]-=w;a[r]-=w;
		if(!a[l]) l++;
		if(!a[r]) r--;
	}cout<<res;
	return 0;
}