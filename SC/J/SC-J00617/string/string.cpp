#include<bits/stdc++.h>
#define int long long
using namespace std;
char a[200005];
int b[200005],n,t;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i];
		cin>>a[i];
	}
	int l=1,r=n,y;
	while(l<r){
		y=min(b[l],b[r]);
		if(a[l]!=a[r]){
			t+=y;
		}
		b[l]-=y;
		b[r]-=y;
		if(b[l]==0){
			l++;
		}
		if(b[r]==0){
			r--;
		}
	}
	cout<<t;
	return 0;
}
