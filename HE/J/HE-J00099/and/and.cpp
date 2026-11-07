#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],as=1;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=m;i++){
		as=as&a[i];
		cout<<a[i]<<endl;
	}
	cout<<as;
	return 0;
}
