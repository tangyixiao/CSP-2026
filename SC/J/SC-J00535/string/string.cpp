#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005][5],ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;
		cin>>a[i][1]>>c;
		a[i][2]=c-'a'+1;
	}
	int l=1,r=n;
	while(l<r){
		int ml=min(a[l][1],a[r][1]);
		if(a[l][2]!=a[r][2]){
			ans+=ml;
		}
		a[l][1]-=ml;
		a[r][1]-=ml;
		if(a[l][1]<=0){
			l++;
		}
		if(a[r][1]<=0){
			r--;
		}
	}
	cout<<ans;
	return 0;
}