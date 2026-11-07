#include<bits/stdc++.h>
using namespace std;

const int N=210000;
long long n,m,a[N],i,k;
string s[N];
bool er(long long k){
	long long t=k;
	while(t!=0){
		long long r;
		r=t%2;
		if(r!=0) return false;
		t=t/2;
	}
	return true;
}
bool cmp(long long x,long long y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	cout<<a[n-m];
	return 0;
}