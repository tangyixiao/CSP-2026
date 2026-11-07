#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
long long a[N];
long long b[N];
int m,n,z;
long long maxn=0;
long long pd(long long cs,long long bh,long long s){
	cs--; 
	long long s1;
	for(int i=bh;i<=n;i++){
		s1=max(s1,pd(cs,i,s&a[bh+i]));
	}
	if(cs==0)return s;
	return s;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		//if(pd(m,i,1)>maxn)
		maxn=max(maxn,pd(n,i,1<<32-1));
	}
	cout<<maxn;
	return 0;
} 