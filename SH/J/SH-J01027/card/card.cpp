#include<bits/stdc++.h>
using namespace std;
int n,m,a2[109999],a[109999];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a2[a[i]]++;
		if(i==n) a2[a[i]]=n;
	}
	if(m==2){
		cout<<a2[1]<<' '<<a2[2];
		return 0;
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	for(int i=2;i<=n;i++){
	    if(a[i]!=a[i-1]) cout<<i-1<<' ';
	}
	cout<<n;
}
