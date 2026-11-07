#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	int n,m;
	cin>>n>>m;
	long long ans,a[200005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	ans=a[1];
	if(m==2)cout<<max(a[1]&a[2],a[2]&a[3]);
	else{
	
		for(int i=2;i<=m;i++){
			ans&=a[i];
		}
		cout<<ans;
	}
	return 0;
} 
