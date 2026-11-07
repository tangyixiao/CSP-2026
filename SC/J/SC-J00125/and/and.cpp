#include<bits/stdc++.h>
const int N=2*1e5+5;
int a[N];
bool cmp(int x,int y){
	return x>y;
}
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m; 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	int ans=a[0];
	for(int i=0;i<m;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}