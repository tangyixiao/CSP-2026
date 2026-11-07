#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],ans=0;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(int i=2;i<=m;i++){
		ans&=a[i];
	}
	if(m==1){
	cout<<a[1];return 0;}
	if(m==2){
		int c=a[1]&a[2];
		cout<<c;
		return 0;
	}
	cout<<ans;
	return 0;
}
