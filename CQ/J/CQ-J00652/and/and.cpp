#include<bits/stdc++.h>
using namespace std;
int a[200005];
long long ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;n>=i;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	ans=a[1];
	for(int i=2;m>=i;i++){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
} 
