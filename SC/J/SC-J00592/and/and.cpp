#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		int mx=-9999;
		for(int i=1;i<=n;i++){
			if(a[i]>mx) mx=a[i];
		}
		cout<<mx;
	}
}