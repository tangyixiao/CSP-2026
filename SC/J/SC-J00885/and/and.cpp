#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000005],l,maxx;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) if(i!=j) maxx=max(maxx,a[i]&a[j]);
		}
		cout<<maxx;
	}
	else if(m==n-1){
		l=a[2];
		for(int i=3;i<=n;i++) l&=a[i];
		cout<<l;
	}
	else{
		l=a[1];
		for(int i=2;i<=n;i++) l&=a[i];
		cout<<l;
	}
	return 0;
}