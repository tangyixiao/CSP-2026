#include<bits/stdc++.h>
#define N 200010
using namespace std;
int a[N];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}              
	sort(a+1,a+1+n,cmp);
	int x=a[1];
	for(int i=1;i<m;i++){
		x=x&a[i+1];
	}
	cout<<x;
	return 0;
}
