#include <bits/stdc++.h>
using namespace std;
long long a[200010],used[200010],maxx=0,x,y,n,m,j;
int main(){
 	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long i;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	else if(m==2){
		for(i=1;i<=n;i++){
			for(j=i+1;j<=n;j++){
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
		return 0;
	}
	else if(m==n){
		long long t=a[1];
		for(i=2;i<=n;i++){
			t&=a[i];
		}
		cout<<t;
		return 0;
	}
	else{
		maxx=a[n];
		for(i=2;i<=m;i++) maxx&=a[n-i+1];
		cout<<maxx;
		return 0;
	}
	return 0;
}