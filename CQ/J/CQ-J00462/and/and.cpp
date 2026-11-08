#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],ans; 
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int lst=1;
	for(int j=30;j>=0;j--){
		int cnt=0;
		for(int i=n;i>=lst;i--){
			if(a[i]>=(1<<j)){
				cnt++;
			}
		}
		if(cnt>=m){
			lst=n-cnt;
			for(int i=n;i>=lst;i--){
				a[i]-=(1<<j);
			}
			ans+=(1<<j);
		}
	}
	cout<<ans;
	return 0;
}

