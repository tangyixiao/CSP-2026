#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[200000];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	long long ans=a[0];
	for(int i=1;i<m;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}

