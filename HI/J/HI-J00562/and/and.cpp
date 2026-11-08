#include<bits/stdc++.h>
using namespace std;int a[1000000];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	
	int as1=a[0],tp1=0;
	for(int i=1;i<m;i++){
		tp1=as1&a[i];
		as1=tp1;
	}
	cout<<as1;
	return 0;
}
