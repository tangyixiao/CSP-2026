#include<bits/stdc++.h>
using namespace std;
long long n,m,a[10000000],c;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.in","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	c=a[1];
	for(int i=2;i<=m;i++){
		c=c&a[i];
	}
	cout<<c;
	return 0;
} 
