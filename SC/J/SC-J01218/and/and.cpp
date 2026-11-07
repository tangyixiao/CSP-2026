#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],b[200005];
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<m;i++){
		b[i]=a[i];
	}
	sort(b,b+m);
	cout<<b[0];
	return 0;
}