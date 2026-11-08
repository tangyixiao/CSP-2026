#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5+5;
int a[maxn],c[maxn],ans[maxn],b[maxn],s[maxn];
long long n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int r=1;r<=n;r++){
		cin>>a[r];
	}
	for(int j=1;j<=n;j++){
		ans[a[j]]++;
		cout << ans[a[j]] << endl;
		if(j=n){
			ans[a[j]] = n;
		}
	}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
	
	return 0;
}









