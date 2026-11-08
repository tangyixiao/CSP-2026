#include <bits/stdc++.h>
using namespace std;
long long a[10000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,ans=0,num=0,t=0;
	cin>>n>>m;
	
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(long long i=0;i<n;i++){
		t=i+1;
		num=ans;
		ans=a[i];
		for(long long j=i;j<=m;j++){
		 	ans= ans & a[t];
		 	t++;
		}
		ans=max(ans,num);	
	} 
	cout<<ans;
	return 0;
	
}
