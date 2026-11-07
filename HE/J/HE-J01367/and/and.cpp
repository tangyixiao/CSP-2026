#include <bits/stdc++.h>
using namespace std;
int a[200005];
int zs(string x){
	int qz=1;
	int qh=0;
	for(int i=0;i<x.size();i++){
		if(x[i]='1'){
			qh+=qz;
		}
		qz*=2;
	}
	return qh;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int  z=0;
	string sy;
	int m1=m;
	while(m1--){
		string lt="0";
		string q;
		for(int i=n;i>=1;i--){
			int cnt=0;
			if(zs(q)>zs(lt)){
				lt=q;
			}
		}
		if(m1==m){
			sy=q;
		}
			for(int i=0;i<sy.size();i++){
				if(sy[i]==q[i]&&sy[i]==1){
					sy[i]==1;
				}else{
					sy[i]==0;
				}
			}
	}
	cout<<zs(sy);
	return 0;
}
