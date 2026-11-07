#include<bits/stdc++.h>
using namespace std;
long long a[200002];
long long x;
bool cmp(long long a, long long b){
	return a>b;
}
int main(){
	freopen(and.in,"r",stdin);
	freopen(and.out,"w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	x=a[1];
	for(int i=1;i<=m;i++){
		x=x&a[i];
	}
	cout<<x;
	return 0;
} 