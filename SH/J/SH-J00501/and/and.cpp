#include<cstdio>
#include<iostream>
using namespace std;
int n,m;
int rest;
int a[300000];
int cnt;
int ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	rest = n;
	for(int curbit = 1<<29;curbit;curbit>>=1){
		cnt = 0;
		for(int i = 1;i <= rest;i++) if(a[i]&curbit) ++cnt;
		if(cnt>=m){
			ans|=curbit;
			int tmp = 0;
			for(int i = 1;i <= rest;i++) if(a[i]&curbit) a[++tmp]=a[i];
			rest=cnt;
		}
	}
	cout<<ans<<'\n';
	return 0;
}
