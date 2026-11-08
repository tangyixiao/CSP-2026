#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ans1,ans2;
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans1=max(ans1,a[i]);
	}
	if(m==1){
		cout<<ans1;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans2=max(a[i]&a[j],ans2);
			}
		}
		cout<<ans2;
	}
	else cout<<1;
	return 0;
}
