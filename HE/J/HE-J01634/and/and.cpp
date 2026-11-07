#include<bits/stdc++.h>
using namespace std;
int a[200005];
int binl(int n){
	int ans=0;
	while(n){
		n/=2;
		ans++;
	}
	return ans;
}
int n1(int n){
	int ans=0;
	while(n){
		if(n%2){
			ans++;
		}
		n/=2;
	}
	return ans;
}
bool cmp(int a,int b){
	if(binl(a)!=binl(b)){
		return binl(a)>binl(b);
	}
	if(n1(a)!=n1(b)){
		return n1(a)>n1(b);
	}
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	int ans=a[1];
	for(int i=2;i<=m;i++){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}
