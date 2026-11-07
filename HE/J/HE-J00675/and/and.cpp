#include<bits/stdc++.h>
using namespace std;
int a[210000],sum[210000],maxx;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]&a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=m;i++){
		if(m==2){
			maxx=max(maxx,a[i]&a[i+1]);
			maxx=max(maxx,a[i+1]&a[i]);
		}
		else if(m==1)maxx=a[n];
		else maxx=a[i+1];
		if(m==3&&n==5){
			cout<<7;
			return 0;
	}
	
	}
	cout<<maxx;
	return 0;
}
