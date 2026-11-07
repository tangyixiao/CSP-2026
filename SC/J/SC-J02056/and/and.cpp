#include <bits/stdc++.h>
using namespace std;
int a[200005],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<=n;k++){
				int x=a[i]&a[j];
				x=x&a[k];
				ans=max(ans,x);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
} 