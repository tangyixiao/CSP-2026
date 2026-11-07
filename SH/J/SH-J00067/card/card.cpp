#include<bits/stdc++.h>
using namespace std;
int a[500003],ans[300003];
int c[500003];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	c[0]=n+1;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[j]==a[i]){
				c[i]=j;
				break;
			}
		}
		if(c[i]){
			continue;
		}
		for(int j=i-1;j>=0;j--){
			cout<<c[j]<<endl;
			if(c[j]>i){
				ans[a[i]]+=(i-j);
				cout<<i<<':'<<a[i]<<'+'<<i-j<<endl;
				break;
			}
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
