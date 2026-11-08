#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ans;
int main(){

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if(m==1){
		ans=-1;
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
	}else if(n==m){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}else{
		cout<<"0";
	}

	return 0;
}

