#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005];
bool cmp(long long a, long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	if (m==1){
		sort(a+1,a+n+1,cmp);
		cout<<a[1];
	}
	else if (m==n){
		int ans=a[1];
		for (int i=1;i<=n;i++) ans&=a[i];
		cout<<ans;
	}
	else if (m==2){
		int ans, an;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				an=a[i]&a[j];
				ans=max(ans,an);
			}
		}
		cout<<ans;
	}
	else{
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
	}
	return 0;
}
