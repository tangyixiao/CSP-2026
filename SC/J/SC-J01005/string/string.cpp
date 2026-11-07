#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	cin>>n>>m;
	int ma=0,an=0x3f3f3f;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		max(a[i],ma);
		an=an&a[i];
	}
	if(m==1){
		cout<<ma;
		return 0;
	}
	if(m==n){
		cout<<an;
		return 0;
	}
	for(int i=1;i<=m;i++){
		an=a[i]&an;
	}
	cout<<an;
	return 0;
}