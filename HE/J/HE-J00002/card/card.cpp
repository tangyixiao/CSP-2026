#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],t[300005],tt[300005],b[500005],ans[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(!t[a[i]])tt[a[i]]=i;
		else b[i]=tt[a[i]],tt[a[i]]=i;
		t[a[i]]++;
	}
	for(int j=1;j<=n;j++){
		for(int i=n;i>=j;i--){
			if(!b[i]){ans[a[i]]++;continue;}
			if(b[i]>=j)i=b[i];
			ans[a[i]]++;
		}			
	}
	for(int i=1;i<=m;i++)cout << ans[i] << ' ';
	return 0;
}
