#include<bits/stdc++.h>
using namespace std;

long long n,m,ans;
long long a[200000];

bool cmp(int a,int b){
	return a>b;
}

main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n,cmp);
	ans=a[0];
	for(int i=1;i<m;i++)ans=ans & a[i];
	cout<<ans;
	return 0;
}
