#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long a[200003];
	int n,m;
	long long ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		sort(a+1,a+n+1);
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=a[i]&ans;
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	int ans1=a[1],ans2=a[n];
	for(int i=2;i<=m;i++){
		ans1=a[i]&ans1;
		ans2=a[n-i+1]&ans2;
	} 
	cout<<max(ans1,ans2);
	return 0;
}
