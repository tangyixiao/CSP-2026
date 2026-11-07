#include<bits/stdc++.h>
using namespace std;
int a[200010];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdin);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	int max=0;
	for(int i=1;i<=n-m+1;i++){
		int cnt=a[i];
		for(int j=1;j<m;j++){
			cnt=cnt&a[i+j];
		}
		if(max<cnt) max=cnt;
	}
	cout<<max;
	return 0;
}
