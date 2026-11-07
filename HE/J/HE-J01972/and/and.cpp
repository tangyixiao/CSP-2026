#include<bits/stdc++.h>
using namespace std ;
int n,m;
int a[200005];
int ma;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma=max(a[i],ma);
	}
	if(m==1){
		cout<<ma;
		return 0;
	}
	sort(a+1,a+n+1);
	int ans=a[n];
	m--;
	int i=n-1;
	while(m--){
		ans=ans&i;
		i--;
	}
	cout<<ans;
	return 0;
}
