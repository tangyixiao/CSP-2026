#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200000010];
long long max1=INT_MIN;
void dfs(long long yh,long long xb,long long cs){
	if(cs==0){
		max1=max(yh,max1);
		return;
	}
	for(long long i=xb+1;i<n;i++){
		if(i<n){
			dfs((yh & a[i]),i,cs-1);
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	for(long long i=0;i<n-m;i++){
		dfs(a[i],i,2);
	}
	cout<<max1;
	return 0;
}
