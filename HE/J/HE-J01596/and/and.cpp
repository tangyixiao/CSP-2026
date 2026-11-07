#include<bits/stdc++.h>
using namespace std;
int a[200005],r[200005];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1,cmp);
		cout<<a[1];
		return 0;
	}
	for(long long i=1;i<=n;i++){
		r[i]=a[i]&a[i+1];
	}
	sort(r+1,r+n+1,cmp);
	cout<<r[1];
	return 0;
}
