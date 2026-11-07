#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0; 
	}
	long long ll=a[n-m+1];
	for(int i=n-m+2;i<=n;i++){
		ll=(ll&a[i]);
	}
	cout<<ll;
	return 0;
}