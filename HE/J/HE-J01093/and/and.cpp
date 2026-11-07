#include<bits/stdc++.h>
using namespace std;
long long n,m,i,a[200001];
bool cmp(long long x,long long y){
	if(x>y) return true;
	return false;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(i=0;i<n;++i) cin>>a[i];
	sort(a,a+n,cmp);
	cout<<a[m-1]<<endl;
	return 0;
}
