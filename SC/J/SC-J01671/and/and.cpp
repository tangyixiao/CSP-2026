#include <bits/stdc++.h> 
using namespace std;
long long n,m,a[200005],p[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n-1;i++){
		p[i]=a[i]&a[i+1];
	}
	if(m==2){
		for(int i=1;i<=n-1;i++){
			m=max(m,p[i]);
		}
	}
	else{
	for(int i=1;i<=n+1-m;i++){
		long long m1=p[i];
		for(int j=i+1;j<=i+m-2;j++){
			m1=m1&p[j];
		}
		if(m1>m) m=m1;
	}
}
	cout<<m;
	return 0;
}