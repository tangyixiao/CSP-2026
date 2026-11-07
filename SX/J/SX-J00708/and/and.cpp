#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
int c(int x,long long s,int i);
long long mx=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	c(1,2147483647,0);
	cout<<mx;
	return 0;
}
int c(int x,long long s,int i){
	if(x==m+1)return s;
	for(int j=i+1;j<=n;j++){
		mx=max(mx,a[j]&c(x+1,s&a[j],j));
	}
	return 0;
}