#include<bits/stdc++.h>
using namespace std;
int n,a[200005],m,s,as;
bool f(int x,int y){
	int xs=0,ys=0,tx=x,ty=y;
	while(x){
		if(x&1) xs++;
		x/=2;
	}
	while(y){
		if(y&1) ys++;
		y/=2;
	}
	if(xs==ys) return tx>ty;
	return xs>ys;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	srand(time(0));
	cin>>n>>m;
	cin>>a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	as=a[n];
	for(int i=n-1;i>=n-m+1;i--) as&=a[i];
	sort(a+1,a+1+n,f);
	s=a[1];
	for(int i=2;i<=m;i++) s&=a[i];
	cout<<max(as,s);
	return 0;
}
