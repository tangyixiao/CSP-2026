#include<bits/stdc++.h> 
using namespace std;
long long a[300005];
long long n,m,maxn=-1;
void go(int i,int s,long long z){
	if(s>=m){
		maxn=max(maxn,z);
		return;
	}
	for(int j=i+1;j<=n;j++){
		go(j,s+1,z&a[j]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long ji,d=-1; 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==1) ji=a[i];
		else ji=ji&a[i];
		d=max(d,a[i]);
	}
	if(m==n){
		cout<<ji;
		return 0;
	}
	if(m==1) {
		cout<<d;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	go(1,0,2047);
	cout<<maxn;
	return 0;
}
//