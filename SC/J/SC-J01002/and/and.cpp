#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans;
int cmd(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+1+n,cmd);
	ans=a[1];
	for(int i=2;i<=m-1;i++){
		ans=ans & a[i]; 
	}
	cout<<ans;
	return 0;
}