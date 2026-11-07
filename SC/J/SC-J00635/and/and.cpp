#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int b[200010];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	b[1]=a[1]&a[2];
	for(int i=2;i<=m;i++){
		b[i]=b[i-1]&a[i+1];
	} 
	cout<<b[m];
	return 0;
} 