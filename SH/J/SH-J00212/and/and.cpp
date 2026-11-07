#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int a[200005]={};
	int ans;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);	


	for(int i=2;i<=n-m+1;i++){
		ans=a[1];
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}
