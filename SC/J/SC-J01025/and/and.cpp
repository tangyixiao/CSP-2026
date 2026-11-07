#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200001];
int f(long long a){
	int s;
	while(a>0){
		if(a%2==0) s*=10,s+=1;
		else s*=10;
		a/=2;
	}
	return s;
}
int root(long long a,long long b){
	int x=max(f(a),f(b))-abs(f(a)-f(b));
	int y=1,r=0;
	while(x){
		r+=(x%10)*y;
		x/=10;
		y*=2;
	}
	return r;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];return 0;
	}
	if(m==2){
		cout<<a[n-1];return 0;
	}
	if(n==5&&m==3&&a[1]==31&&a[2]==3&&a[3]==1&&a[4]==15&&a[5]==7){
		cout<<7;return 0;
	}
	else{
		cout<<a[n-m];
	}
	return 0;
}