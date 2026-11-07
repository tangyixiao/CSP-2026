#include<bits/stdc++.h>
using namespace std;
int a[2000001],n,m,maxand;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	int and1=a[1];
	for(int i=2;i<=m;i++){
		and1=and1&a[i];
	}
	cout<<and1;
	return 0;
}
