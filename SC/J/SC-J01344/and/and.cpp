#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+10;
int n,m;
int a[maxn];
void solve1(){
	int ans=a[1];
	for(int i=2;i<=n;i++){
		ans&=a[i];
	}
	cout<<ans;
	return;
}
void solve2(){
	int ans=-1e9;
	for(int i=1;i<=n;i++){
		ans=max(ans,a[i]);
	}
	cout<<ans;
	return;
}
void solve3(){
	int ans=-1e9;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j)
			ans=max(ans,a[i]&a[j]);
		}
	}
	cout<<ans;
	return;
}
void solve4(){
	sort(a+1,a+1+n);
	cout<<a[m];
	return;
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	if(m==n){
		solve1();
	}else if(m==1){
		solve2();
	}else if(m==2){
		solve3();
	}else if(n<=20){
		solve4();
	}else{
		solve4();
	}
	return 0;
}