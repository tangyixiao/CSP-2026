#include<bits/stdc++.h>
using namespace std;
int a[100000005];
long long ans=0;
bool cmp(int ac,int b){
	return ac>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	int x=a[1];
	for(int i=2;i<=m;i++){
		x=x&a[i];
	}
	cout<<x;
	return 0;
}
