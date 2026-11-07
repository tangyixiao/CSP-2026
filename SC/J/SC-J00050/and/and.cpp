#include<bits/stdc++.h>
using namespace std;

int a[200005];
int n,m;
void pf1(){
	int maxn = -1;
	for(int i=1;i<=n;i++){
		maxn = max(maxn,a[i]);
	}
	cout<<maxn;
	return; 
}
void pf2(){
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		pf1();
		return 0;
	}
	else{
		pf2();
		return 0;
	}
}